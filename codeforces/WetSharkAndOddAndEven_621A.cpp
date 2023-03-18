#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
#define pb push_back
#define itr for(int i=0;i<n;i++)

int main(){
	ll n,wait=0,sum=0,waiting;cin>>n;
	vll A;
	itr {ll x;cin>>x;A.pb(x);}
	sort(A.begin(),A.end(),greater<ll>());
	itr{
		if(A[i]%2){
			if(wait==0){wait++;waiting=A[i];}
			else{wait--;sum+=A[i]+waiting;}
		}
		else{sum+=A[i];}
	}
	cout<<sum<<"\n";
	return 0;
}

		

