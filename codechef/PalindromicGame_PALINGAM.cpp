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
	int t;cin>>t;
	itr(T,0,t){
		int a=0,uu=0,superset=1;//unique_uncommon
		string A,B;cin>>A>>B;
		int ALetters[26]={0},BLetters[26]={0};
		int n=A.length();
		itr0{
			ALetters[A[i]-97]++;
			BLetters[B[i]-97]++;
		}
		itr(i,0,26){
			if(ALetters[i]==0&&BLetters[i]>ALetters[i]){superset=0;}
			if(BLetters[i]==0&&ALetters[i]>BLetters[i]){uu++;}
		}
		if(superset==1&&uu>0){a=1;}
		itr(i,0,26){
			if(ALetters[i]>=2&&BLetters[i]==0){a=1;}
			//if(ALetters[i]+BLetters[i]==1){uu++;}
		}
		if(a==1){cout<<"A\n";}
		else{cout<<"B\n";}
	}
	return 0;
}
