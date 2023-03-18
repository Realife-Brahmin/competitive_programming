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

//ll ABS(ll a){
//	if (a>0){ return a;}
//	else return -1*a;
//}

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int main(){
	//Basically if two distinct numbers (say a and b) have the same remainder upon division by a third common number (say k) then 
	//(a-b) must be divisible by k.
	//Make a vector (here B) of all the differences
	//Find the smallest such difference.(say D)
	//Iterate (to check if they perfectly divide ALL the differences i.e ALL elements in B.) over all the factors of D (including D)
	//All perfectly dividing factors are your answers. 
	//NOTE: k=1 is NOT an acceptable answer.
	  
	ll n,x;cin>>n;vll A;
	itr0{cin>>x;A.pb(x);}
	sort(A.be,A.en);
	vll B;
	itr(N,0,n-1){
		ll X=A[N+1]-A[N];B.pb(X);
	}
	sort(B.be,B.en);
	ll k=B[0];
	ll K=sqrtl(k)+1;
	vll C;
	itr(i,2,K){
		if(k%i==0){C.pb(i);}
	}
	for(int i=C.size()-1;i>=0;i--){
		if(k%C[i]==0&&k/C[i]!=C[i]){C.pb(k/C[i]);}
	}
	if(B[0]!=1){C.pb(B[0]);}
	int good=1;
	for(int i=0;i<C.size();i++){
		good=1;
		for(int j=0;j<B.size();j++){
			if(B[j]%C[i]!=0){
				good=0;j=B.size();
			}
		}
		if(good==1){
			cout<<C[i]<<" ";
		}
	}
	return 0;
}



	
			
