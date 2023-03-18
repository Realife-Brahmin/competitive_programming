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

char A[50][50]={0};
int valid(int row,int col,char A[][50],int i,int j){
       if(i>=row||i<0||j>=col||j<0||A[i][j]=='#'){
	       return 0;
       }
	return 1;
}

int checkPath(int row,int col,char A[][50],int p[4],string s,int sX,int sY){
	int n=s.length();
	int x=sX,y=sY,good=0;
	itr0{
		switch(p[s[i]-'0']){
			case 1:y++;break;
			case 2:x++;break;
			case 3:y--;break;
			case 4:x--;break;
		}
		if(valid(row,col,A,x,y)==1){
			if(A[x][y]=='E'){
				good=1;
				i=n;
				continue;
			}
		}
		else if(valid(row,col,A,x,y)==0){
			return 0;
		}
	}
	return good;
}

int main(){IOS
	int row,col,ans=0,sX,sY;
	cin>>row>>col;
	int p[4]={1,2,3,4};
	itr(ro,0,row){
		itr(co,0,col){
			cin>>A[ro][co];
			if(A[ro][co]=='S'){
				sX=ro;
				sY=co;
			}	
		}
	}
	string s;cin>>s;
	itr(j,0,24){
		if(checkPath(row,col,A,p,s,sX,sY)==1){
			ans++;
		}
		next_permutation(p,p+4);
	}
	cout<<ans<<"\n";
	return 0;
}	
