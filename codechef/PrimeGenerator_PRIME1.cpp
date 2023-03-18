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

	//				PRELIMINARY CALCULATIONS...
	//***************************************************************************************
	ll isPrime[31623]={0};isPrime[0]=1;isPrime[1]=1;	//sqrt(1e9)=31622.7766
	int n=31623;
	//itr0{cout<<PrimeOrNot[i]<<" ";}
	//cout<<"\n";
	itr(i,2,31623){
		if(isPrime[i]==0){
			for(int j=2;i*j<=31622;j++){
				isPrime[i*j]++;
			}
		}
	}
	vll Siev;
	Siev.pb(0);//Siev[0]=0
	Siev.pb(0);//Siev[1]=0
	itr(i,2,31623){
		if(isPrime[i]==0){
			Siev.pb(i);
		}
	}
	//	itr(i,2,Siev.size()){
	//		cout<<Siev[i]<<" ";
	//	}
	//	cout<<"\n";
	
	//*****************************************************************************************
	//					CODE BEGINS!
	
	//cout<<"ab tak sab theek hai#1\n";
	ll t;cin>>t;
	itr(T,0,t){
		ll lo,hi;cin>>lo>>hi;
		ll n=hi-lo+1;
		//cout<<n<<"\n";
		//ll A[n],
		ll ans[n];
		itr0{
		//	A[i]=i+lo;
			ans[i]=0;}
		int i=2;
		Siev.pb(sqrt(hi)+1);
	//cout<<"ab tak sab theek hai#2\n";
		while(Siev[i]<=sqrt(hi)){
		//	cout<<Siev[i]<<" is lesser than "<<sqrt(hi)<<"\n";
			ll j=Siev[i];
			for(int k=lo/j;j*k<=hi;k++){
				if(j*k>=lo&&k!=1){ans[(j*k)-lo]++;}
			//	cout<<"Surely, "<<j*k<<" is not a prime!\n";
			}
			i++;
		}
		if(lo==1){ans[0]=1;}
		itr0{
			if(ans[i]==0){
				cout<<i+lo<<"\n";
			}
		}
		cout<<"\n";
	}
	return 0;
}
