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
#define itr0 for(int i=0;i<A.size();i++)
#define itr1 for(int i=1;i<=n;i++)
#define itr2 for(int i=1;i<n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()

int main(){
	int n,X,x,y,z;cin>>n;vi A;itr1{cin>>X;A.pb(X);}
	cin>>x>>y>>z;
	A.erase(A.b+x-1);A.erase(A.b+y-1,A.b+z-1);
	cout<<A.size()<<"\n";
	itr0{cout<<A[i]<<" ";}
	cout<<"\n";return 0;
}



	
