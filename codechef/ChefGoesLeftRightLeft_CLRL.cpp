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

#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define mp make_pair

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}
int main(){
	ll t,x,X,bad=0;cin>>t;
	itr(T,0,t){
		ll LeastLeft=-(1e9+1),LeastRight=1e9+1;
		bad=0;
		ll n,r;cin>>n>>r;
		itr0{	
			cin>>x;X=x-r;
			if(X>0){
				if(X<LeastRight){LeastRight=X;}
				else{if(bad==0){cout<<"NO\n";bad=1;}}
			}
			else if(X<0){
				if(X>LeastLeft){LeastLeft=X;}
				else{if(bad==0){cout<<"NO\n";bad=1;}}
			}
		}
		if(bad==0){cout<<"YES\n";}
	}
	return 0;
}
