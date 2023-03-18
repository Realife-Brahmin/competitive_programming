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
#define fi first
#define se second

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int checkR(int a[][100],int d[][100],int RO,int COL){
	int D=a[0][COL]-d[0][COL];
	itr(i,1,RO){
		if(a[i][COL]-d[i][COL]!=D){
			return 0;
		}
	}
	return 1;
}

int checkC(int a[][100],int d[][100],int COL,int RO){
	int D=a[RO][0]-d[RO][0];
	itr(j,1,COL){
		if(a[RO][j]-d[RO][j]!=D){
			return 0;
		}
	}
	return 1;
}


int main(){	
	vector<pair<string,ll>> ansR,ansC;
	int row,col,x,min;cin>>row>>col;
	int A[row][100],DR[row][100],DC[row][100];
	itr(i,0,row){
		min=500;
		itr(j,0,col){
			cin>>A[i][j];
			x=A[i][j];
			if(x<min){min=x;}
		}
		itr(k,0,min){
			ansR.pb(mp("row",i+1));
		}
		itr(j,0,col){
			DR[i][j]=min;
		}
	}
	itr(j,0,col){
		min=500;
		itr(i,0,row){
			x=A[i][j];
			if(x<min){min=x;}
		}
		itr(k,0,min){
			ansC.pb(mp("col",j+1));
		}
		itr(i,0,row){
			DC[i][j]=min;
		}
	}
	itr(j,0,col){
		if(checkR(A,DR,row,j)==1){
			int diff=A[0][j]-DR[0][j];
			itr(k,0,diff){
				ansR.pb(mp("col",j+1));
			}
		}
		else{
			cout<<"-1\n";
			return 0;
		}
	}
	itr(i,0,row){
		int diff=A[i][0]-DC[i][0];
		itr(k,0,diff){
			ansC.pb(mp("row",i+1));
		}
	}

	if(ansR.size()<=ansC.size()){
		cout<<ansR.size()<<"\n";
		itr(i,0,ansR.size()){
			cout<<ansR[i].fi<<" "<<ansR[i].se<<"\n";
		}
	}
	else{
		cout<<ansC.size()<<"\n";
		itr(i,0,ansC.size()){
			cout<<ansC[i].fi<<" "<<ansC[i].se<<"\n";
		}
	}
	
	return 0;
}
				



