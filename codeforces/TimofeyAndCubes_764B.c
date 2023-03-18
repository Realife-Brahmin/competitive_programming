#include<stdio.h>
int main(){
	int n; scanf("%d",&n);
	int A[n];
	if(n%2){
		for(int i=1;i<=n;i++){
			if(i%2){
				scanf("%d",&A[n-i+1]);
			}
			else{
				scanf("%d",&A[i]);
			}
		}
	}
	else{
		for(int i=1;i<=n/2;i++){
			if(i%2){
				scanf("%d",&A[n-i+1]);
			}
			else{
				scanf("%d",&A[i]);
			}
		}
		for(int i=n/2+1;i<=n;i++){
			if(i%2==0){
				scanf("%d",&A[n-i+1]);
			}
			else{
				scanf("%d",&A[i]);
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
return 0;
}
		
		
