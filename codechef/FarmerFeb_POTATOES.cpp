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

#define priority_queue pq
#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

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

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int main(){IOS
//*******************************************************************************************************************
//							PRELIMINARY CODE
	ll isPrime[2100]={0};//idk the min. PRIME no. after 2000, so I just hoped that it must be contained within 2100
	vll seiv;
	itr(i,2,2100){
		if(isPrime[i]==0){
			for(ll j=2;i*j<=2099;j++){
				isPrime[i*j]=1;
			}
		}
	}
	itr(i,2,2100){
		if(isPrime[i]==0){seiv.pb(i);}
	}
//**********************************************************************************************************************
//							CODE BEGINS
	ll t;cin>>t;
	itr(T,0,t){
		ll x,y;cin>>x>>y;
		ll sum=x+y;
		ll i=0;
		while(seiv[i]<=sum){
			i++;
		}
		cout<<seiv[i]-sum<<"\n";
	}
	return 0;	
}	
