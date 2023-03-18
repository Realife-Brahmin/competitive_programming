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

int cmp(pi a,pi b){
	if(a.first<b.first){return 1;}
	else if(a.first==b.first){return a.second>=b.second; }
	return 0;
}

int main(){
	int s,n,w,v;cin>>s>>n;
	int A[n][s+1];
	vpi B;
	itr0{cin>>w>>v;B.pb(mp(w,v));}
	sort(B.be,B.en,&cmp);
	//itr0{cout<<B[i].fi<<" "<<B[i].se<<" ";}
	//cout<<"\n";

	itr0{
		itr(we,0,s+1){
			if(we==0){A[i][we]=0;}
			else{
				if(i==0){
					if(we<B[i].fi){A[i][we]=0;}
					else{A[i][we]=B[i].se;}
				}
				else{
					if(we<B[i].fi){A[i][we]=A[i-1][we];}
					else{A[i][we]=max(A[i-1][we],B[i].se+A[i-1][we-B[i].fi]);}
				}
			}
			if(we<=24){	
				cout<<A[i][we]<<" ";
			}
			else{
				if(A[i][we]<10){cout<<A[i][we]<<"  ";}
				else{cout<<A[i][we]<<" ";}
			}
		}
		cout<<"\n";
	}

	cout<<A[n-1][s]<<"\n";
	return 0;	
}
			
