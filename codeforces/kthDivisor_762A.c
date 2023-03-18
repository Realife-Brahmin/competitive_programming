#include<stdio.h>
#include<math.h>
typedef long long int ll;
ll A[40000000];

int main(){
	ll n,count=0,i;int k;
	scanf("%I64d %I64d",&n,&k);

	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){count++;A[count]=i;//printf("Factor #%I64d is %I64d\n",count,i);
		}
		if(count==k){
			printf("%I64d\n",A[count]);
			return 0;
		}
	}	
	if(sqrt(n)*sqrt(n)==n){
		if(k>2*count-1){printf("-1\n");return 0;}
		else{printf("%I64d\n",n/A[2*count-k]);return 0;}
	}
	else if(sqrt(n)*sqrt(n)!=n){
		if(k>2*count){printf("-1\n");return 0;}
		else{printf("%I64d\n",n/A[2*count-k+1]);return 0;}
	}
}
	
	
