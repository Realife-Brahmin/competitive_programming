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

int minusPlus(string s){
	int count=0;
	itr(i,0,s.length()){
		if(i%2==0){
			if(s[i]!='-'){
				count++;
			}
		}
		else if(i%2==1){
			if(s[i]!='+'){
				count++;
			}
		}
	}
	return count;
}

int plusMinus(string s){
	int count=0;
	itr(i,0,s.length()){
		if(i%2==0){
			if(s[i]!='+'){
				count++;
			}
		}
		else if(i%2==1){
			if(s[i]!='-'){
				count++;
			}
		}
	}
	return count;
}

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

int main(){
	IOS
	ll t;cin>>t;
	itr(T,0,t){
		string s;cin>>s;
		cout<<min(minusPlus(s),plusMinus(s))<<"\n";
	}
	return 0;
}	
