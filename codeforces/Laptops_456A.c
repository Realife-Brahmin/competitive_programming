#include<stdio.h>
void swap(int *a, int *b)       //definition
{int tmp = *a;*a = *b;*b = tmp;}

void SelectSort(int n, int A[]){int i,j;    //definition
	        for(i=0;i<n;i++){ for(j=i+1;j<n;j++){if(A[j]<A[i]){swap(&A[i],&A[j]);}
		}
		}
}

void SelectSort(int n, int A[]);  //prototype

void dualSelectSort(int n, int A[],int B[]){int i,j;	//definition
	for(i=0;i<n;i++){ 
		for(j=i+1;j<n;j++){if(A[j]<A[i]){swap(&A[i],&A[j]);swap(&B[i],&B[j]);}}}
}

void swap(int *a, int*b);       //prototype

void dualSelectSort(int n, int A[],int B[]);        //prototype

int compare(int X[],int Y[],int N){	//definition
	for(int i=0;i<N;i++){
		if(X[i]!=Y[i]){return 1;}
	}return 0;
}

int compare(int X[],int Y[],int N);	//prototype

int main(){
	int n,scanf("%d",&n);int A[100005],B[100005];for(int j=0;j<n;j++){scanf("%d%d",&A[j],&B[j]);}
	dualSelectSort(n,A,B);int B1[100005];for(int i=0;i<n;i++){B1[i]=B[i];}
	SelectSort(n,B);if(compare(B,B1,n)){printf("Happy Alex\n");}else{printf("Poor Alex\n");}
	return 0;}

