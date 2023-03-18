#include<bits/stdc++.h>	//I_<3_BITS:)
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
#define itr for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()

int main(){
	ll n,k,ans,sum=1,previous;cin>>n>>k;
	vll A,B;B.pb(0);
	itr1{B.pb(sum);sum+=i+1;}
//	itr1{cout<<B[i]<<" ";}
//	cout<<"\n";
	itr{ll x;cin>>x;A.pb(x);}
	ll indx=lb(B.b,B.e,k)-B.b;
	
//	if(bs(B.b,B.e,k)==0){indx--;}
	//cout<<indx<<"\n";
//	if(indx==0){previous=0;}
	ll count=k-B[indx-1];
	cout<<A[count-1]<<"\n";
	return 0;
}



	
