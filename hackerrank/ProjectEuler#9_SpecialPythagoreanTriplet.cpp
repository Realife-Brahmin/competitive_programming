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
#define fi first
#define se second

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int check(ll a,ll b){
	if (((int)sqrtl((a*a)+(b*b)))*((int)sqrtl((a*a)+(b*b)))==(a*a)+(b*b)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
//****************************************************************************************************************************//
//							PRELIMINARY CODE
	map<ll,ll> M;
	ll n=3001,a,b,c,sum,pi;
	itr0{M.insert(mp(i,-1));}
	for(a=3;a<=999;a++){
		for(b=a+1;b<=1499;b++){
			sum=0;pi=-1;
			if(check(a,b)==1){
				c=sqrtl((a*a)+(b*b));
				sum=a+b+c;
				pi=a*b*c;
				if(M[sum]<pi){M[sum]=pi;}
			}
		}
	}
//*****************************************************************************************************************************//
//							  CODE BEGINS!	
	ll t;cin>>t;
	itr(T,0,t){
		cin>>n;
		cout<<M[n]<<"\n";
	}	
	return 0;
}


			
