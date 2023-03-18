#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll op1(ll pos, ll k,ll A[]){
	ll skill=0;
	if(pos-k<=0){
		for(ll i=0;i<pos;i++){
			skill+=A[i];
		}
	}
	else{
		for(ll i=pos-k-1;i<pos;i++){
			skill+=A[i];
		}
	}
	return skill;
}

int main(){
	ll n,q,op,l,r,k,pos,ns;cin>>n>>q;
	ll A[n];for(ll i=0;i<n;i++){cin>>A[i];}
	for(ll i=0;i<q;i++){
		cin>>op;
		if(op==2){cin>>pos>>ns;A[pos-1]=ns;}
		else{
			cin>>l>>r>>k;ll sum=0;
			for(ll i=l;i<=r;i++){
				sum+=op1(i,k,A);
			}
			cout<<sum<<"\n";
		}
	}
	return 0;
}



