#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
#define itr for(int i=0;i<n;i++)
#define pb push_back
#define lb lower_bound
#define bs binary_search
#define ub upper_bound
#define b begin()
#define e end()

int main(){
        ll n;cin>>n;vll A;
        itr{ll x;cin>>x;A.pb(x);}
        sort(A.b,A.e);
        ll q;cin>>q;
        for(int i=0;i<q;i++){ll m;cin>>m;cout<<"\n"<<ub(A.b,A.e,m)-A.b<<"\n";}
        return 0;
}




	
