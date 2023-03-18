#include<stdio.h>
int main(){
	int n,i,j,k;scanf("%d",&n);
	if(n%2){printf("%d\n",(n*n+1)/2);
		for(i=0;i<n;i++){
		if(i%2){
			for(j=0;j<n-2;j+=2){printf(".C");}printf(".\n");
		}
		else{
			for(j=0;j<n-2;j+=2){printf("C.");}printf("C\n");
		}
	}
	}
	else if(n%2==0){printf("%d\n",(n*n)/2);
		for(i=0;i<n;i++){
		if(i%2){
			for(j=0;j<n-1;j+=2){printf(".C");}
			printf("\n");
		}
		else{
			for(j=0;j<n-1;j+=2){printf("C.");}
			printf("\n");
		}
	}
	}
	return 0;
}

			
