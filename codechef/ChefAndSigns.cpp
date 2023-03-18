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
	int ans,flag=2,start,MAX=1,length=1,t;
	cin>>t;
	for(int T=0;T<t;T++){
		string s;cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='>'){flag=0;start=i+1;i=s.length();MAX=1;length=1;}
			else if(s[i]=='<'){flag=1;start=i+1;i=s.length();MAX=1;length=1;}
		}
		for(int j=start;j<s.length();j++){
			if(flag==0){
				while(s[j]=='>'||s[j]=='='){
					if(s[j]=='>'){length++;MAX=max(MAX,length);}
					j++;
				}
				if(s[j]=='<'){flag=1;length=1;continue;}
			}
			if(flag==1){
				while(s[j]=='<'||s[j]=='='){
					if(s[j]=='<'){length++;MAX=max(MAX,length);}
					j++;
				}
				if(s[j]=='>'){flag=0;length=1;continue;}
			}
		}
	
		if(flag!=2){cout<<MAX+1<<"\n";}else{cout<<MAX<<"\n";}
		flag=2,MAX=1;
	}
	
	return 0;
}



	
