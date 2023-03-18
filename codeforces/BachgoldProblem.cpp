#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	if(n%2){
		int count=(n-3)/2;cout<<count+1<<"\n";
		for(i=1;i<=count;i++){
			cout<<2<<" ";
		}
		cout<<3<<"\n";
	}
	else{
		int count=n/2;cout<<count<<"\n";
		for(i=1;i<=count;i++){
			cout<<2<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

		
