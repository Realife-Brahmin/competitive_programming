#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;int a,b;
	if(n==1){
		cin>>b;
		if(b==0){cout<<"UP\n";}
		else if(b==15){cout<<"DOWN\n";}
		else{cout<<"-1\n";} 
		return 0;
	}
	for(int i=0;i<n-2;i++){
		cin>>a;
	}
	cin>>a>>b;
	
	if(b==0){cout<<"UP\n";}
	else if(b==15){cout<<"DOWN\n";}
	else if(b-a>0){cout<<"UP\n";}
	else if(b-a<0){cout<<"DOWN\n";}
	return 0;
}
	
