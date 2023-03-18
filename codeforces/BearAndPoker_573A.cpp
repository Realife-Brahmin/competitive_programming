#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;int x,y;
	for(int i=0;i<n;i++){
		cin>>x;
		while(x%2==0){
			x/=2;
		}
		while(x%3==0){
			x/=3;
		}
		if(i==0){y=x;}
		else if(x!=y){cout<<"No\n";return 0;}
	}
	cout<<"Yes\n";
	return 0;
}






