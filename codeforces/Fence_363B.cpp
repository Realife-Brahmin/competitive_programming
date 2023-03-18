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

int main(){
	ll n,x,k,sum=0,indx=1;cin>>n>>k;vll A;
	itr0{cin>>x;A.pb(x);}
	for(int i=0;i<k;i++){sum+=A[i];}
	ll min=sum;
	for(int i=1;i+k<=n;i++){
		sum+=A[i+k-1]-A[i-1];
		if(sum<min){
			min=sum;indx=i+1;
		}
	}
	cout<<indx<<"\n";
	return 0;
}

	



	
