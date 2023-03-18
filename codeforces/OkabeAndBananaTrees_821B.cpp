#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sum(ll n){
	return (n*(n+1))/2;
}

ll bananas(ll h, ll k){
	ll ans= (h+1)*sum(k) + (k+1)*sum(h);
	return ans;
}

ll line(ll h, ll m, ll b){
	return (-1)*(h/m)+b;
}

int main(){
	ll m,b,h,k,max=0,now;cin>>m>>b;
	for(ll i=0;i<=b*m;i+=m){
		h=i;k=line(h,m,b);
		now=bananas(h,k);
		if(max<now){max=now;}
	}
	cout<<max<<"\n";
	return 0;
}


		

