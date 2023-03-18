#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int c,v0,v1,a,l,s,days,pages=0;
	cin>>c>>v0>>v1>>a>>l;
	for(days=1;;days++){
		if(days!=1){pages-=l;}
		if(v0+(days-1)*a>v1){s=v1;}
		else{s=v0+(days-1)*a;}
		pages+=s;
		if(pages>=c){cout<<days<<"\n";return 0;}
	}
}
		

	
