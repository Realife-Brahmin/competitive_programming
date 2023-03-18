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
	string s1,s2,s3;cin>>s1>>s2;
	pair<char,char> P[26];int n=26;
	itr0{P[i]=mp(s1[i],s2[i]);}
	cin>>s3;n=s3.length();
	sort(P,P+26);
	itr0{
		int x=s3[i];
		if(x>=48&&x<=57){cout<<s3[i];}
		else if(x>=65&&x<=90){
			char ANS=P[s3[i]-65].second;
			char ans=toupper(ANS);
			cout<<ans;
		}
		else{
			cout<<P[tolower(s3[i])-97].second;
		}
	}
	cout<<"\n";
	return 0;
}
	























