#include<stdio.h>
#include<math.h>
int main(){
	int t; scanf("%d",&t);
	int mod=pow(10,9)+7;
	for(int T=0;T<t;T++){
		int n;scanf("%d",&n);
		if(n%2==0){ int N=n/2; int ans=(N)*(N+1); int ANS=(ans%mod);
		printf("%d\n",ANS);}
		else if(n%2==1){ int N=(n-1)/2; int ans=(N)*(N+1)+(n+1)/2; int ANS=(ans%mod);
		printf("%d\n",ANS);}
	}
	return 0;
}
	
