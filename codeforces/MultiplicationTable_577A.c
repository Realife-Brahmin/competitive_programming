#include<stdio.h>
#include<math.h>
int main(){
	long long int n,x,i,j,k,count=0;scanf("%I64d%I64d",&n,&x);
	if(x>n*n){printf("0\n");return 0;}
	for(i=1;i<=n;i++){
		if(x%i==0&&x/i<=n){
			count++;
		}
	}
	printf("%I64d\n",count);
	return 0;
}

