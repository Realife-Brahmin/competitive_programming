#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
using namespace std;
typedef long long int ll;
typedef double lf;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<lf> vlf;
typedef vector<char> vch;
typedef vector<string> vstr;
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
typedef set<char> sch;
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
	int r=-1,b=-1,y=-1,g=-1;
	int R=0,B=0,Y=0,G=0;
	string s;cin>>s;
	int n=s.length();
	itr0{
		if(r==-1&&s[i]=='R'){r=i;}
		if(b==-1&&s[i]=='B'){b=i;}
		if(y==-1&&s[i]=='Y'){y=i;}
		if(g==-1&&s[i]=='G'){g=i;}
		if(r!=-1&&b!=-1&&y!=-1&&g!=-1){i=n;}
	}
	for(int j=r+4;j<n;j+=4){if(s[j]=='!'){R++;}}
	for(int j=r-4;j>=0;j-=4){if(s[j]=='!'){R++;}}

	for(int j=b+4;j<n;j+=4){if(s[j]=='!'){B++;}}
	for(int j=b-4;j>=0;j-=4){if(s[j]=='!'){B++;}}

	for(int j=y+4;j<n;j+=4){if(s[j]=='!'){Y++;}}
	for(int j=y-4;j>=0;j-=4){if(s[j]=='!'){Y++;}}

	for(int j=g+4;j<n;j+=4){if(s[j]=='!'){G++;}}
	for(int j=g-4;j>=0;j-=4){if(s[j]=='!'){G++;}}

	cout<<R<<" "<<B<<" "<<Y<<" "<<G<<"\n";
	return 0;
}

			
