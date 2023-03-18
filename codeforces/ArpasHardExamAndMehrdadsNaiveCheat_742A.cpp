#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	if(n==0){cout<<"1\n";return 0;}
	switch(n%4){
		case 1:{cout<<"8\n";return 0;}
		case 2:{cout<<"4\n";return 0;}
		case 3:{cout<<"2\n";return 0;}
		case 0:{cout<<"6\n";return 0;}
	}
}	
