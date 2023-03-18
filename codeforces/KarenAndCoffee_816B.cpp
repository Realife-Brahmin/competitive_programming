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

int main(){
	ll n,k,q,l,r;cin>>n>>k>>q;
	ll A[200002]={0};//Initially ZERO recipes recommend any temperature

	//#1	The array resulting from #1, when later cumulated in #2, will 'magically' tell us how many recipes recommend each temperature
	itr0{		
		cin>>l>>r;
		A[l]++;
		A[r+1]--;
	}

	//#2	Here we first cumulate the result array from #1, and mark each temperature as pass or fail 
	//	(i.e. whether ATLEAST k recipes	recommend it or not)

	ll sum=A[0];
	itr(i,0,200002){
		sum+=A[i];
		if(sum>=k){A[i]=1;}
		else{A[i]=0;}
	}

	//#3 The second cumulation in this step tells us (for A[i]) the no. of 'passed' temps. (from 0 to A[i])
	
	sum=A[0];
	itr(i,0,200002){
		sum+=A[i];
		A[i]=sum;
	}

	//#4 
	itr(Q,0,q){
		cin>>l>>r;
		cout<<A[r]-A[l-1]<<"\n";
	}
	return 0;
}
	

