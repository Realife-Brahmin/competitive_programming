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

#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define mp make_pair

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

ll Find(ll item,ll A[]);

int main(){
	ll t;cin>>t;
	itr(T,0,t){
		ll n,q,c,x,y;cin>>n;
		ll Owner[n+1];Owner[0]=0;
		ll S[n+1];S[0]=0;
		itr(i,1,n+1){Owner[i]=i;cin>>S[i];}
		cin>>q;
		itr(Q,0,q){
			cin>>c;
			switch(c){
				case 1:
					       cin>>x;cout<<Find(Owner[x],Owner)<<"\n";
					       break;
				case 0: 
					       cin>>x>>y;
					       ll X=Find(Owner[x],Owner),Y=Find(Owner[y],Owner);
					       if(x==y||X==Y){cout<<"Invalid query!\n";}
					       else if(S[X]>S[Y]){
							      	Owner[Y]=Owner[X];
						}
					       else if(S[X]<S[Y]){
							      	Owner[X]=Owner[Y];
						}
						      
					       break;
			}
		}	
	}
	return 0;
}


ll Find(ll item,ll A[]){
	if(A[item]==item){
		return item;
	}
	else{
		return Find(A[item],A);
	}
}
