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
		ll n,m,x;cin>>n>>m;char ch;
		ll M[m],N[n],sum=0;
		ll minSal[n];itr0{cin>>minSal[i];N[i]=0;}
		vpll salJob;itr(i,0,m){ll sal,Job;cin>>sal>>Job;salJob.pb(mp(sal,Job));M[i]=0;}
		ll Q[n][m];
		itr0{
			itr(j,0,m){
				cin>>ch;if(ch=='1'){Q[i][j]=1;}
				else if(ch=='0'){Q[i][j]=0;}
			}
		}
		itr0{//i-th candidate chooses
			int comp=m;ll BIG=0;
			itr(j,0,m){//she looks for possible options
				if(Q[i][j]==1){
					if(salJob[j].second>0){
						ll foo=salJob[j].first;
						if(foo>=minSal[i]&&foo>BIG){
							BIG=foo;
							comp=j;
						}
					}
				}
			}
			if(BIG){
				N[i]=1;M[comp]++;
				salJob[comp].second--;
				sum+=salJob[comp].first;
			}
		}
		int hires=0,notHired=0;
		itr0{if(N[i]==1){hires++;}}
		itr(j,0,m){if(M[j]==0){notHired++;}}
		cout<<hires<<" "<<sum<<" "<<notHired<<"\n";
	}
	return 0;
}

							
				


		
		
			














