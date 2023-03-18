#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
using namespace std;
typedef long long int ll;
typedef double lf;
typedef long double llf;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<lf> vlf;
typedef vector<pair<ll,ll>> vpll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<lf,lf>> vplf;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef pair<lf,lf> plf;
typedef pair<string,string> pstr;
typedef set<ll> sll;
typedef set<int> si;
typedef set<lf> slf;
typedef set<string> sstr;
typedef map<string,int> mstri;
typedef map<string,ll> mstrll;
typedef map<string,lf> mstrlf;
typedef map<string,string> mstrstr;

#define priority_queue pq
#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define setP(x) fixed<<showpoint<<setprecision(x)
//forces till x decimal digits
//to be used s just another element in the cout stream

#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define to top()
#define po pop()
#define si size()
#define mp make_pair
#define fi first
#define se second
#define MOD 1000000007

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

ll fact(ll m){
	ll ans=1;
	itr(i,0,m){
		ans*=(m-i);
		ans%=MOD;
	}
	return ans;
}

ll npr(ll bigger,ll smaller){
	ll ans=1;
	ll other=bigger-smaller;
	itrR(i,bigger,1+other){
	    ans*=i;
	    ans%=MOD;
	}
	return ans;
}

int main(){IOS
	ll n;cin>>n;
	map<ll,ll> m;
	itr0{
		ll size;
		cin>>size;
		m[size]++;
	}
	vll counts;
	for(auto jtr: m){
		counts.pb(jtr.se);
	}
	//sort(counts.be,counts.en);
	ll ans=1;
	ll most=counts[0];

	itr(i,1,counts.si){
			ll nextCount=counts[i];
			ll bigger=max(nextCount,most),smaller=min(nextCount,most);
			ans*=npr(bigger,smaller);
			ans%=MOD;
			//cout<<"npr("<<bigger<<","<<smaller<<") = "<<npr(bigger,smaller)<<"\n";
			most=bigger;
	}
	cout<<ans<<"\n";
	return 0;
}
