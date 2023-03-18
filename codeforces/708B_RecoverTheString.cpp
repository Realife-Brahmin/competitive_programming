#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
using namespace std;
typedef long long int ll;
typedef double lf;
typedef long double llf;
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

void imp(){
	cout<<"Impossible\n";
	exit(0);
}

int main(){IOS
	ll a00,a01,a10,a11,c0,c1,x;
	cin>>a00>>a01>>a10>>a11;

	c0=sqrtl(2*a00)+1;//A much better way to get X from x where x= X nCr 2
	c1=sqrtl(2*a11)+1;

	if(a00==0||a11==0){//Special case as for a00=0 the number of zeroes may be either ONE or ZERO
		if(a01==0&&a10==0){
			if(a00==0){c0=0;}
			if(a11==0){c1=0;}
		}
	}

	if(c0==0&&c1==0){cout<<0<<"\n";exit(0);}

	else if((c0*(c0-1))/2!=a00){imp();}	
	else if((c1*(c1-1))/2!=a11){imp();}
	
	if(c0*c1!=a01+a10){imp();}	//checking validity of numbers

	x=c0+c1;
	itr(i,1,x+1){
		if(a01>=c1){
			cout<<0;
			a01-=c1;
			c0--;
		}
		else{
			cout<<1;a10-=c0;c1--;
		}
	}
	cout<<"\n";
	return 0;
}	
