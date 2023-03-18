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

ll height(ll n,ll A[],ll t){
	ll h=0;
	itr0{h+=abs(A[i]-t);}
	return h;
}

int main(){IOS
	ll n;cin>>n;
	ll A[n];itr0{cin>>A[i];}
	sort(A,A+n);
	ll lo=0,hi=n-1;
	ll ans=(MOD-7)*n;
	while(hi-lo>1){
		ll mid=(hi+lo)/2;
		ll h=height(n,A,A[mid]);
		if(h<=ans){
			ans=h;
			hi=mid;
		}
		else{lo=mid;}
	}
	if(n==1){ans=0;}
	if(n==2){ans=A[1]-A[0];}
	cout<<ans<<"\n";
	return 0;
}	
