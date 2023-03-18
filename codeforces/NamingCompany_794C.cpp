#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int i=0,pair=0,n=a.length();
	string c[n];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<char>());
	
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"\n";

	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<"\n";

	while(a[pair]<=b[pair]&&pair<n/2){
		c[i]=a[pair];
		c[i+1]=b[pair];
		pair++;i+=2;
	}

	if(i==n-1&&n%2==1){c[i]=a[pair];i++;}

	if(a[pair]>b[pair]&&i<n){
		if(n%2){
			c[n-1]=a[n/2+1];
			while(a[pair]>b[pair]&&pair<n/2){
				c[i]=a[pair];
				c[i+1]=b[pair];
				pair++;i+=2;
			}
		}
		else{
			while(a[pair]>b[pair]&&pair<n/2){
				c[i]=b[pair];
				c[i+1]=a[pair];
				pair++;i+=2;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<c[i];
	}
	cout<<"\n";
	return 0;
}



	
