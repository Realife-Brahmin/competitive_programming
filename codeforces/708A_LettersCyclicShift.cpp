#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
using namespace std;
typedef long long int ll;
typedef double lf;
typedef long double llf;
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

#define priority_queue pq
#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define to top()
#define po pop()
#define si size()
#define mp make_pair
#define fi first
#define se second

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int main(){IOS
	string s;
	cin>>s;
	ll n=s.length(),indx=n;
	ll onlyA=1;
	itr0{
		if(s[i]!='a'){
			s[i]-=1;
			onlyA=0;
		}
		else if(s[i]=='a'){
			indx=i;
			i=n;
			continue;
		}
	}
	int i=1;
	if(indx==0&&n>1){
		while(i<n&&s[i]=='a'){
			i++;
		}
		if(i<n&&s[i]!='a'){
			itr(j,i,n){
				if(s[j]!='a'){
					s[j]-=1;
					onlyA=0;
				}
				else if(s[j]=='a'){
					j=n;
					continue;
				}
			}
		}
	}
	if(onlyA==1){s[n-1]='z';}
	cout<<s<<"\n";
	return 0;
}	
