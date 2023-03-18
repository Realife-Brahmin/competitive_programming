#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;if(n%2){cout<<n/2<<"\n";for(int i=1;i<=(n-3)/2;i++){cout<<2<<" ";}cout<<3<<"\n";return 0;}
	else{cout<<n/2<<"\n";for(int i=0;i<n/2;i++){cout<<2<<" ";}cout<<"\n";return 0;}
}
