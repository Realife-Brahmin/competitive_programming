#include<bits/stdc++.h>	//I_<3_BITS_Pilani:)
using namespace std;
typedef long long int ll;
typedef double d;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<d> vd;
typedef vector<pair<ll,ll>> vpll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<d,d>> vpd;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef pair<d,d> pd;
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define itr2 for(int i=1;i<n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()
#define mod 1000000007

int main(){
	ll x,y,n,indx;cin>>x>>y>>n;
	ll A[6]={x,y,y-x,-x,-y,x-y};
	if(n%6==0){indx=5;}else{indx=n%6-1;}
	ll ans=A[indx];
	if(ans<0&&ans%mod){
		ans=ans-((ans-mod)/mod)*mod;}
	else{ans=ans-(ans/mod)*mod;}
	cout<<ans<<"\n";
	return 0;
}



	
