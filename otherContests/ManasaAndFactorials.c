#include<stdio.h>
int main(){
	int t; scanf("%d",&t);
	long long int n;
	for(int T=0;T<t;T++){
		scanf("%lld",&n);
		long long int ANS=5*n,d=100,m=5;
		while((n*5)/d){
			ANS-=(((n*5)/d)*m); d*=10; m+=10;
		}
		printf("%lld\n",ANS);
	}
return 0;
}
