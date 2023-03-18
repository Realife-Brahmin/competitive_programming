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
	int n,A[300][300],m,x,y,w,pow=0,d,x1,x2,y1,y2,Max=0;
	cin>>n>>m;
	itr0{itr(j,0,n){A[i][j]==0;}}
	itr(i,0,m){
		cin>>x>>y>>w;A[x][y]+=w;
		pow=w-1;
		while(pow>0){
			d=w-pow;x1=x-d;x2=x+d;y1=y-d;y2=y+d;
			
			itr(i,x1,x2){
				if(i>=0&&i<=n-1&&y1>=0&&y1<=n-1){
					A[i][y1]+=pow;
				}
			}
			itr(j,y1,y2){
				if(x2>=0&&x2<=n-1&&j>=0&&j<=n-1){
					A[x2][j]+=pow;
				}
			}
			itrR(i,x2,x1+1){
				if(i>=0&&i<=n-1&&y2>=0&&y2<=n-1){
				A[i][y2]+=pow;
				}
			}
			itrR(j,y2,y1+1){
				if(x1>=0&&x1<=n-1&&j>=0&&j<=n-1){
					A[x1][j]+=pow;
				}
			}
		pow--;
		}
	}
	itr(i,0,n){itr(j,0,n){Max=max(A[i][j],Max);}}
//	itr(i,0,n){itr(j,0,n){cout<<A[i][j];}cout<<"\n";}
//	cout<<"\n";
	cout<<Max<<"\n";
	return 0;
}


		
