#include<iostream>
using namespace std;
int main(){
	int n,m,c,msum=0,csum=0;cin >>n;for(int i=0;i<n;i++){
						cin >> m >> c; if(m>c){msum++;} else if(c>m){csum++;}}
	if(msum>csum){cout << "Mishka\n";}
	else if(csum>msum){cout << "Chris\n";}
	else if(csum==msum){cout << "Friendship is magic!^^\n";}
return 0;}
