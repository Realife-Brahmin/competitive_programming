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
	ll n,k,x;cin>>k>>n;
	ll sum[k];sum[0]=0;
	for(int i=1;i<=k;i++){
		cin>>x;
		sum[i]=sum[i-1]+x;//A[i]th score is till ith judge!
	}
//	itr(i,1,k+1){cout<<sum[i]<<" ";}
//	cout<<"\n";
	sll S(sum+1,sum+k+1);
	vll A,B;
	for(int i=0;i<n;i++){cin>>x;A.pb(x);}
	sort(A.be,A.en);
	for(int i=1;i<n;i++){
		x=A[i]-A[i-1];B.pb(x);
	}
	if(S.size()<n){cout<<"0\n";return 0;}
	sll::iterator itr,jtr,ktr;
	vll AA;
	for(itr=S.be;itr!=S.en;itr++){
		AA.pb(*itr);
	}
	itr(i,0,q){cout<<AA[i]<<" ";}
	cout<<"\n";
	return 0;
}





















