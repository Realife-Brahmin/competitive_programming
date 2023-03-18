#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
using namespace std;
typedef long long int ll;
typedef double lf;
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

#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define itr2 for(int i=1;i<n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()
#define mp make_pair

ll MAX(ll a,ll c){
	if(a>c){return a;}
	else{return c;}
}

ll output(ll n,ll B,ll N){
	return n*(N-(n*B));
}

ll ans(ll B,ll N){
	ll Max;
	if(N%(2*B)==0){return output(N/(2*B),B,N);}
	else{
		ll p=N/(2*B);
		ll q=p+1;
		ll P=0,R=0;if(p>=1){P=output(p,B,N);
			if(p>=2){ll r=p-1;R=output(r,B,N);}
		}
		ll Q=output(q,B,N);
		Max=MAX(P,MAX(Q,R));
		return Max;
	}
}

int main(){
	ll t;cin>>t;
	for(int T=0;T<t;T++){
		ll B,N;cin>>N>>B;
		cout<<ans(B,N)<<"\n";
	}
	return 0;	
}
