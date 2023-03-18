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
	double X=0;ll n,x,MAX=1,MIN=1e10;
	cin>>n;	
	itr0{	
		cin>>x;
		if(x>MAX){MAX=x;}
		if(x<MIN){MIN=x;}
		X+=log(x);
	}
	X/=n;
	ll hi=MAX,lo=MIN,ans=hi;
	while(lo<=hi){
		ll mid=(hi+lo)/2;
		if(log(mid)>X){
			ans=mid;
			hi=mid-1;
			continue;
		}
		if(log(mid)<X){
			lo=mid+1;
			continue;
		}
		if(log(mid)==X){
			ans=mid+1;
			lo=hi+1;
			continue;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
