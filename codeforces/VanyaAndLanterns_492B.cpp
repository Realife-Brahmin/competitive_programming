#include<bits/stdc++.h>	//I_<3_BITS:)
#include<iomanip>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef vector<double> vd;
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
	ll n;double l;cin>>n>>l;double start,end,lstart,lend,MAX=0,x,y;vd A;
	itr{cin>>y;A.pb(y);}
	sort(A.b,A.e);
	if(n==2){MAX=(A[1]-A[0])/2;}
	itr{
		if(i==0){start=A[0];lstart=start;}
		if(i==n-1){end=A[n-1];lend=l-end;}
		if(i){x=(A[i]-A[i-1])/2;if(MAX<x){MAX=x;}}
	}
	cout<<fixed<<showpoint<<setprecision(12)<<max(MAX,max(lend,lstart))<<"\n";
	return 0;
}




	
