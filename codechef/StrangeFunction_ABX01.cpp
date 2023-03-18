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

#define MOD 1000000000000000009
ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

ll mulmod(ll a, ll b, ll mod){
	ll res=0;
	a=a%mod;
	while(b>0){
		if (b % 2 == 1){
			 res = (res + a) % mod;
		}
		a = (a * 2) % mod;
		b /= 2;
	}
	return res%mod;
}

ll sum(ll a){
	ll ans=0;
	while(a>0){
		ans+=a%10;
		a/=10;
	}
	return ans;
}

ll F(ll s){
	while(sum(s)>9){
		return F(sum(s));
	}
	return sum(s);
}

ll cycle(ll a){
	ll ans=1,A=a;
	set<ll> s;
	s.insert(F(a));
	A=mulmod(A,a,MOD);
	cout<<"CYCLE: Now A is: "<<A<<"\n";
	set<ll>::iterator itr=s.find(F(A));
	while(itr==s.end()){
		s.insert(F(A));
		ans++;
		A=mulmod(A,a,MOD);
		cout<<"CYCLE: Now A is: "<<A<<"\n";
		itr=s.find(F(A));
	}
	return ans;
}
	
ll POW(ll a,ll n){
	ll ans=1;
	while(n--){
		ans*=a;
	}
	return ans;
}

int main(){IOS
	ll t;cin>>t;
	itr(T,0,t){
		ll a,n,po,x;
		cin>>a>>n;
		cout<<"cycle= "<<cycle(a)<<"\n";
		if(cycle(a)==2){
			if(cycle(a)!=cycle(a*a*a)){
						if(n==1){cout<<F(a)<<"\n";}
						else{cout<<F(a*a)<<"\n";}
			}
			else{
				x=n%cycle(a);
				if(x==0){
					cout<<F(POW(a,cycle(a)))<<"\n";
				}
				else{
					cout<<F(POW(a,x))<<"\n";
				}
			}
		}
		else{
			x=n%cycle(a);
			if(x==0){
				cout<<F(POW(a,cycle(a)))<<"\n";
			}
			else{
				cout<<F(POW(a,x))<<"\n";
			}
		}
	}

		
	return 0;
}	
