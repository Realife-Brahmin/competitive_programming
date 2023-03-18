#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,t25=0,t50=0;cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;switch(x){
			case 100:{
				if(t50>=1&&t25>=1){t50--;t25--;}
				else if(t25>=3){t25-=3;}
				else{cout<<"NO\n";return 0;}
			}
			case 50:{
				if(t25>=1){t25--;t50++;}
				else{cout<<"NO\n";return 0;}
			}
			case 25:{
				t25++;
			}
		}
	}
	cout<<"YES\n";
	return 0;
	}
		


					
