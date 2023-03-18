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
	string s,t="WUB",u="  ";
	cin>>s;
	while(s.find(t)+1){
		s.replace(s.find(t),3," ");
	}
	while(s.find(u)+1){
		s.replace(s.find(u),2," ");
	}
	if(s[0]==' '){s.erase(s.b);}
	cout<<s<<"\n";
	return 0;
}


	
