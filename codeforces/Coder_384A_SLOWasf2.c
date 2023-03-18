#include<stdio.h>
int main(){
	int n,i,j;scanf("%d",&n);(n%2)?printf("%d\n",(n*n+1)/2):printf("%d\n",(n*n)/2);
	for(j=0;j<n;j++){for(i=0;i<n;i++){((i+j)%2)?printf("."):printf("C");}printf("\n");}
	return 0;}
