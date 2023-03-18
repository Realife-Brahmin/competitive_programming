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

ll Find(ll PARENT[],ll item){
	while(PARENT[item]!=item){
		PARENT[item]=PARENT[PARENT[item]];
		item=PARENT[item];
	}
	return item;
}

void Union(ll A[],ll set1,ll set2){
	A[set1]=set2;
}

int main(){
	ll t;cin>>t;
	itr(T,0,t){
		ll n,c,x,y,X,Y;cin>>n;
		ll PARENT[n+1];PARENT[0]=0;
		ll S[n+1];S[0]=0;
		itr(i,1,n+1){
			PARENT[i]=i;
			cin>>S[i];
		}
		ll q;cin>>q;
		itr(Q,0,q){
			cin>>c;//c stands for case
			switch(c){
				case 0:
					cin>>x>>y;
					X=Find(PARENT,x);
					Y=Find(PARENT,y);
					if(x==y||X==Y){
						cout<<"Invalid query!\n";
					}
					else if(S[X]>S[Y]){
						Union(PARENT,Y,X);
					//itr(i,1,n+1){cout<<PARENT[i]<<" ";}
					//cout<<"\n";
					}
					else if(S[X]<S[Y]){
						Union(PARENT,X,Y);
					//itr(i,1,n+1){cout<<PARENT[i]<<" ";}
					//cout<<"\n";
					}
					break;
				case 1:
					cin>>x;
					X=Find(PARENT,x);
					cout<<X<<"\n";
					break;
			}
		}
	}
	return 0;
}


//void Union(ll set1, ll set2,unordered_map<ll,ll> PARENT,unordered_map<ll,ll> RANK){//We want less total height (depth) of tree
//	if(RANK[set1]>RANK[set2]){	//tree1 has more height
//		PARENT[set2]=set1;
//		RANK[set1]+=RANK[set1]-RANK[set2]+1;
//	}
//	else if(RANK[set1]<RANK[set2]){	//tree2 has more height)
//		PARENT[set1]=set2;
//		RANK[set2]+=RANK[set2]-RANK[set1]+1;
//	}
//	else if(RANK[set1]==RANK[set2]){
//		PARENT[set1]=set2;
//		RANK[set2]++;
//	}
//}
//
