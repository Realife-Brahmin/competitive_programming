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

#define itr(i,start,length) for(int i=start;i<length;i++)
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
	int t;cin>>t;
	for(int T=0;T<t;T++){
		int n,i,done=0,bad=0,DONE=0;
		cin>>n;
		int A[n],B[8]={0},C[8]={0};
			itr0{
				cin>>A[i];
				if(A[i]>7){bad=1;}
			}

			if(A[0]==1){done=1;}
			else{bad=1;}
			itr0{
				if(!DONE&&done<7){
					if(A[i]>done+1){bad=1;}
					else if(A[i]==done){B[done]++;}
					else if(A[i]==done+1){done++;B[done]++;}
				}
				else if(done==7){
					DONE=1;
					if(A[i]<=5){bad=1;}
					else if(A[i]==6){done--;C[done]++;}
				}
				else if(DONE&&done<7){
					if(A[i]>done){bad=1;}
					else if(A[i]==done){C[done]++;}
					else if(A[i]==done-1){done--;C[done]++;}
				}
			}
			for(int i=1;i<7;i++){
				if(B[i]!=C[i]){bad=1;}
			}
			if(bad==1){cout<<"no\n";}
			else{cout<<"yes\n";}
	}
	return 0;
}


			



	
