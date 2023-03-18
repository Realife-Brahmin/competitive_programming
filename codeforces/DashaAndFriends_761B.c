#include<stdio.h>

void rotate(int n,int A[]){	//definition
	int tmp=A[n-1];for(int i=n-2;i>=0;i--){
			A[i+1]=A[i];}
	A[0]=tmp;
	return;	//optional
}

void rotate(int n,int A[]);	//declaration

int main(){
	int n,L;scanf("%d%d",&n,&L);int A[n+1],B[n+1];int i,j,k,l,a,b,A1,B1;

	scanf("%d",&a);b=a,A1=a;
	for(i=0;i<=n-1;i++){
		scanf("%d",&a);if(a>b){A[i]=a-b;}else{A[i]=a-b+L;}
	}
	if(A1>a){A[n]=A1-a;}else{A[n]=A1-a+L;}

		
	scanf("%d",&a);b=a,B1=a;
	for(i=1;i<=n-1;i++){
		scanf("%d",&a);if(a>b){B[i]=a-b;}else{B[i]=a-b+L;}
	}
	if(B1>a){B[n]=B1-a;}else{B[n]=B1-a+L;}
	
	for(i=1;i<n;i++){
		
		
