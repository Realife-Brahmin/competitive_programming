#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
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

#define priority_queue pq
#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define to top()
#define po pop()
#define si size()
#define mp make_pair
#define fi first
#define se second

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int nxt(int a){
	if(a<6){return a+1;}
	else if(a==6){return 0;}
}

int main(){IOS
	ll t;cin>>t;
	itr(T,0,t){
		int w;string s;cin>>w>>s;
		mstrll M;
		M.insert(mp("mon",0));
		M.insert(mp("tues",1));
		M.insert(mp("wed",2));
		M.insert(mp("thurs",3));
		M.insert(mp("fri",4));
		M.insert(mp("sat",5));
		M.insert(mp("sun",6));

		if(w==28){itr(i,0,7){cout<<"4 ";}}
		else if(w==29){
			itr(i,0,7){
				if(i==M[s]){cout<<"5 ";}
				else{cout<<"4 ";}
			}
		}
		else if(w==30){
			itr(i,0,7){
				int j=nxt(M[s]);
				if(i==M[s]||i==j){cout<<"5 ";}
				else{cout<<"4 ";}
			}
		}
		else if(w==31){
			itr(i,0,7){
				int j=nxt(M[s]);
				int k=nxt(j);
				if(i==M[s]||i==j||i==k){cout<<"5 ";}
				else{cout<<"4 ";}
			}
		}
		cout<<"\n";
	}

	return 0;
}	
