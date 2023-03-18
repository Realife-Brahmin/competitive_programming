#include<bits/stdc++.h>
using namespace std;
int main(){
	int max,q,ten=0,coin=0,i,n,k,r;cin>>k>>r;
	q=k%10;
	if(k==0){cout<<"1\n";return 0;}
	else if(k%2){max=10;}
	else{max=5;}

	
