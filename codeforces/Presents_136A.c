#include<stdio.h>
int main(){
	int n,Pi;scanf("%d",&n); int A[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&Pi); A[Pi]=i;}
	for(int i=1;i<=n;i++){
		printf("%d ",A[i]);}
	printf("\n");
return 0;
}
	 
