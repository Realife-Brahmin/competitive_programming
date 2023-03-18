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
#define be begin()
#define en end()
#define mp make_pair

ll modu(ll x){
	if(x>=0){return x;}
	else{return -1*x;}
}

int check(ll size,ll A[],int D,ll avg){
	for(int c=0;c<D;c++){
		ll B[100001],sumB=0;int b=0;
		for(int a=c;a<size&&b<size;a+=D,b++){
			B[b]=A[a];sumB+=B[b];
		}
		if(sumB/b!=avg){return -1;}
	}
	return 1;
}



ll count(int size,ll A[]){
	ll sum=0;
	for(int i=0;i<=size-2;i++){
		A[i+1]=A[i+1]+A[i];
		sum+=modu(A[i]);
	}
	return sum;
}

void convert(int size,ll A[],ll avg){
	for(int i=0;i<size;i++){
		A[i]-=avg;
	}
}

ll totalCount(int size,int D,ll A[]){
	ll ans=0;
	for(int c=0;c<D;c++){
		ll B[100001],sumB=0;int b=0;
		for(int a=c;a<size&&b<size;a+=D,b++){
			B[b]=A[a];sumB+=B[b];
		}
		ans+=count(b,B);
		//cout<<"ans is now "<<ans<<"\n";
	}
	return ans;
}

int main(){
	int t;cin>>t;
	for(int T=0;T<t;T++){
		int D;ll n,sum=0;
		cin>>n>>D;
		ll A[n];
		itr0{cin>>A[i];sum+=A[i];}
		if(sum%n){cout<<"-1\n";continue;}

		else{
			ll avg=sum/n;
			if(check(n,A,D,avg)==1){
				convert(n,A,avg);
				cout<<totalCount(n,D,A)<<"\n";
			}
			else if(check(n,A,D,avg)==-1){
				cout<<"-1\n";
			}
		}
	}
	return 0;
}

	


	
