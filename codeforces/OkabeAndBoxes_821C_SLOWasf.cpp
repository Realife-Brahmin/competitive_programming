#include<bits/stdc++.h>
#include<stack>
using namespace std;
typedef long long int ll;
int main(){
	ll n,rem=1;cin>>n;
	ll done=0,top,count=0,order[n+1];

	for(int i=1;i<=2*n;i++){string a;cin>>a;
		if(a=="add"){done++;int x;cin>>x;order[done]=x;top=done;}
		else if(a=="remove"){
			if(order[top]!=rem){
				count++;rem++;done--;top=done;
				sort(order+1,order+2+done,greater<int>());
			}
			else{rem++;done--;top=done;}
		}
	}
	cout<<count<<"\n";
	return 0;
}
		
									
	

