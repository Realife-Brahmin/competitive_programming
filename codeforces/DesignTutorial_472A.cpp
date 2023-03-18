#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int N);//declaration
int main(){
	int n,i;cin>>n;for(i=4;i<=(n+1)/2;i++){
			if((isPrime(i)==0)&&(isPrime(n-i)==0)){cout<<i<<" "<<n-i<<"\n";return 0;}
	}
}

int isPrime(int N)//definition
{
	if(N==1) return 0;
	if(N==2||N==3) return 1;
	for(int i=2;i<=sqrt(N);i++){
		if(N%i==0) return 0;
	}
	return 1;
}
