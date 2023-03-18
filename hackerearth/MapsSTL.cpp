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
typedef map<string,int> mstri;
typedef map<string,ll> mstrll;
typedef map<string,lf> mstrlf;
typedef map<string,string> mstrstr;

#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define itr2 for(int i=1;i<n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()
#define mp make_pair

int main(){
	ll n,x,t;string s;cin>>n;mstrll M;
	itr0{
		cin>>t;
		switch(t){
			case 1:{ cin>>s>>x;
				mstrll::iterator itr=M.find(s);
				if(itr==M.end()){
				M.insert(mp(s,x));
				}
				else{
				M[s]+=x;
				}
				break;
			}

			case 2:{ cin>>s;M.erase(s);
				break;
			}
			case 3:{ cin>>s;mstrll::iterator f=M.find(s);
				if(f==M.end()){cout<<"0\n";}
				else{
					ll g=f->second;
					cout<< g <<"\n";}
				break;
			 }	
		}		
	}
	return 0;
}



	
