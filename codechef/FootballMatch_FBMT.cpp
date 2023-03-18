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
#define se second
#define fi first

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int main(){	
	ll t;cin>>t;
	itr(T,0,t){
		ll n,flag=0;cin>>n;
		mstrll M;
		string s,s1,s2;
		itr0{
			cin>>s;
			mstrll::iterator itr=M.find(s);
			if(M.find(s)==M.end()){
				M.insert(mp(s,0));
				if(flag==0){s1=s;flag++;}
				else{s2=s;flag++;}
			}
			else{
				M[s]+=1;
			}
		}
		if(flag==0){
			cout<<"Draw\n";
		}
		else if(flag==1){
			cout<<s1<<"\n";
		}
		else if(flag==2){
			if(M[s1]==M[s2]){
				cout<<"Draw\n";
			}
			else if(M[s1]>M[s2]){
				cout<<s1<<"\n";
			}
			else{
				cout<<s2<<"\n";
			}
		}
	}
	return 0;
}


