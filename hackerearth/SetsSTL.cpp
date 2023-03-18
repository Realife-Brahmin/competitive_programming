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
typedef pair<lf,lf> pd;
typedef set<ll> sll;
typedef set<int> si;
typedef set<lf> slf;
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
	int n,x,y;cin>>n;sll S;
	itr0{
		cin>>x;
		switch (x){
			case 1: cin>>y;S.insert(y);break;
			case 2: cin>>y;S.erase(y);break;
			case 3: cin>>y;sll::iterator i=S.find(y);if(i==S.end()){cout<<"No\n";}else{cout<<"Yes\n";}break;
		}
	}
	return 0;
}
	



	
