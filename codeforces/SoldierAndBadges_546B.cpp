#include<bits/stdc++.h>	//I_<3_BITS:)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpll;
#define itr for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define itr2 for(int i=1;i<n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()

int main(){
	int n;cin>>n;vi A;itr{int x;cin>>x;A.pb(x);}
	sort(A.b,A.e);
	//itr{cout<<A[i]<<" ";}cout<<"\n";
	int min=A[0],ans=0;itr2{if(A[i]>min){min=A[i];}else{min=max(A[i]+1,min+1);}ans+=min-A[i];}
	cout<<ans<<"\n";
	return 0;
}

	



	
