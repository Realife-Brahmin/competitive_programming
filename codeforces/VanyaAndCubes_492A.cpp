#include<iostream>
using namespace std;
int main(){
	int n;cin >> n; for(int i=1;i<40;i++){
			if(((i)*(i+1)*(i+2))/6==n){cout<<i<<endl;return 0;}
			else if(((i)*(i+1)*(i+2))/6>n){cout<<i-1<<endl;return 0;}
			}
}
