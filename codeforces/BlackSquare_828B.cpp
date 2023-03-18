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
#define be begin()
#define en end()
#define mp make_pair

ll MAX(ll a, ll b){
	if(a>b){return a;}
	else return b;
}

int main(){
	ll row,col,x,right=0,left=0,top=0,botm=0,black=0;
	cin>>row>>col;ll A[row][col];
	for(int i=0;i<row;i++){
		string s;cin>>s;
		for(int j=0;j<col;j++){
			if(s[j]=='W'){A[i][j]=0;}
			else{
				A[i][j]=1;
				black++;
				if(black==1){right=j;left=j;top=i;botm=i;}
				if(j>right){right=j;}
				if(j<left){left=j;}
				if(i>botm){botm=i;}
			}
			
		}
	}
	if(black==0){cout<<"1\n";return 0;}
	if(black==1){cout<<"0\n";return 0;}
	ll side=MAX(right-left+1,botm-top+1);
	if(side>row||side>col){cout<<"-1\n";return 0;}
	ll sqblack=0;
	for(int i=top;i<=botm;i++){
		for(int j=left;j<=right;j++){
			if(A[i][j]==1){sqblack++;}
		}
	}
	cout<<side*side-sqblack<<"\n";
	return 0;
}




	
