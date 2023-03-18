#include<bits/stdc++.h>	//I_<3_BITS_Pilani:)
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
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define itr2 for(int i=1;i<n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()
ll MAX(ll x){
	if(x>1){return x;}
	else return 1;
}

int main(){
	ll n,x,y,ans=0;cin>>n>>x;vll A;itr0{cin>>y;A.pb(y);}
	sort(A.b,A.e);itr0{ans+=A[i]*MAX(x);x--;}
	cout<<ans<<"\n";
	return 0;
}




	
