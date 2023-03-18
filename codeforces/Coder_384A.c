#include<stdio.h>
int main(){
	int n,i,j;scanf("%d",&n);
	char A[n],B[n];
	(n%2)?printf("%d\n",(n*n+1)/2):printf("%d\n",(n*n)/2);
	for(i=0;i<n;i++){
		if(i%2){A[i]='.';B[i]='C';}
		else{A[i]='C';B[i]='.';}
	}
	for(j=0;j<n;j++){
		(j%2)?printf("%s\n",B):printf("%s\n",A);}
return 0;
}
