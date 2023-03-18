#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
#define pb push_back
ll n;
vll f,F,M;

int main(){
	ll m,sum=0;cin>>n;
	for(ll i=0;i<n;i++){ll tmp;cin>>tmp;f.pb(tmp);F.pb(sum+f[i]);sum=F[i];}
	

	cin>>m;for(ll i=0;i<m;i++){ll tmp;cin>>tmp;M.pb(tmp);}
	for(ll i=0;i<m;i++){
		cout<<lower_bound(F.begin(),F.end(),M[i])-F.begin()+1<<"\n";
	}
	return 0;
}

	
