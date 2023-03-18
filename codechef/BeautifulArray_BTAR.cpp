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
	ll t;cin>>t;
	itr(T,0,t){
		ll n,x,ans=0;
		cin>>n;
		ll A[4]={0};
		itr0{cin>>x;
			if(x%4==1){A[1]++;}
			else if(x%4==2){A[2]++;}
			else if(x%4==3){A[3]++;}
		}
		ans+=min(A[3],A[1]);
		A[3]-=ans;
		A[1]-=ans;
		ans+=A[2]/2;
		A[2]=A[2]%2;
		if(A[3]==A[1]&&A[2]==1){ans=-1;}
		if(A[3]>A[1]){
			x=A[3]%4;
			if(x==0){ans+=(3*(A[3]/4));if(A[2]==1){ans=-1;}}
			else if(x==2){
				if(A[2]==1){
					ans+=(3*(A[3]/4))+2;
				}
				else if(A[2]==0){
					ans=-1;
				}
			}
			else if(x==1||x==3){ans=-1;}
		}
		else if(A[1]>A[3]){
			x=A[1]%4;
			if(x==0){ans+=3*(A[1]/4);if(A[2]==1){ans=-1;}}
			else if(x==2){
				if(A[2]==1){
					ans+=(3*(A[1]/4))+2;
				}
				else if(A[2]==0){
					ans=-1;
				}
			}
			else if(x==1||x==3){ans=-1;}
		}
		cout<<ans<<"\n";
	}
	return 0;
}





			
