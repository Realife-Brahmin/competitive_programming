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
#define BIG 1000000009
#define MOD 1000000007
ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

void build(ll node,ll lo,ll hi,ll A[],ll st[]){//(A node's) lo and hi (inclusive) show the interval the node covers
	if(lo==hi){	//leaf
		st[node]=0;
	}
	else{
		ll mid=(lo+hi)/2;
		build(2*node,lo,mid,A,st);
		build(2*node+1,mid+1,hi,A,st);
		st[node]=max(st[2*node],st[2*node+1]);//specific to this question
	}
}
	
void update(ll node,ll lo,ll hi,ll indx,ll val,ll A[],ll st[]){//Updates both the tree and the original array
	if(lo==hi){
		A[indx]=val;
		st[node]=val;
	}
	else{
		ll mid=(lo+hi)/2;
		if(indx>=lo&&indx<=mid){
			update(2*node,lo,mid,indx,val,A,st);
		}
		else{
			update(2*node+1,mid+1,hi,indx,val,A,st);
		}
		st[node]=max(st[2*node],st[2*node+1]);
	}
}

ll query(ll node,ll lo,ll hi,ll l,ll r,ll st[]){
	if(l>hi||r<lo){//range specified by node is completely outside the given range
		return BIG;
	}
	else if(lo>=l&&hi<=r){//range specified by node is completely inside the given range
		return st[node];
	}
	else{
		ll mid=(lo+hi)/2;//given range is only partially inside the range specified by this node
		return max(query(2*node,lo,mid,l,r,st),query(2*node+1,mid+1,hi,l,r,st));
	}
}

int main(){IOS
	ll n,l,h,p,c,x,H=0;
	cin>>n;
	ll A[110001]={0},st[440005]={0};
	build(1,1,n,A,st);
	itr(i,1,n+1){
		cin>>l>>h>>p>>c>>x;
		if(c==1){
			H=query(1,1,n,x,x+l-1,st);
			cout<<H<<"\n";
			itr(j,x,x+l){
				update(1,1,n,j,H+1,A,st);
			}
			cout<<"Now0 max height="<<query(1,1,n,1,n,st)<<"\n";//st[1]		
			itr(i,1,23){cout<<A[i]<<" ";}cout<<"\n";	
			update(1,1,n,x+p-1,H+h+1,A,st);
			cout<<"Now1 max height="<<query(1,1,n,1,n,st)<<"\n";//st[1]		
			itr(i,1,23){cout<<A[i]<<" ";}cout<<"\n";	
		}
		else if(c==0){
			H=query(1,1,n,x,x+l-1,st);
			cout<<H<<"\n";
			update(1,1,n,x+p-1,H+h+1,A,st);
			cout<<"Now1 max height="<<query(1,1,n,1,n,st)<<"\n";//st[1]		
			H=query(1,1,n,x,x+l-1,st);
			cout<<"Now0 max height="<<query(1,1,n,1,n,st)<<"\n";//st[1]		
			itr(i,1,23){cout<<A[i]<<" ";}cout<<"\n";	
			itr(j,x,x+l){
				update(1,1,n,j,H+1,A,st);
				cout<<"Now0 max height="<<query(1,1,n,1,n,st)<<"\n";//st[1]		
			}
			itr(i,1,23){cout<<A[i]<<" ";}cout<<"\n";	
		}
	}
	cout<<query(1,1,n,1,n,st)<<"\n";//st[1]		
	//itr(i,1,n+1){cout<<A[i]<<" ";}cout<<"\n";	
	//itr(i,1,4*n+1){cout<<st[i]<<" ";}cout<<"\n";	
	return 0;
}	
