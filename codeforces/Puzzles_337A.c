#include<stdio.h>
void swap(int *a, int *b)       //definition
{
        int tmp = *a;
        *a = *b;
        *b = tmp;

        return; //optional
}

void selectSort(int n, int A[]) //definition
{
        int i,j;

        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(A[j]<A[i])
                        {
                                swap(&A[i],&A[j]);      //invocation
                        }
                }
        }

        return; //optional
}

void swap(int *a, int*b);       //prototype

void selectSort(int n, int A[]);        //prototype

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int F[m], min;
	for(int i=0;i<m;i++){	scanf("%d",&F[i]);	}
	selectSort(m,F);	//call
 	min = F[n-1]-F[0];
	for(int i=0;i<m-n+1;i++){
		if(F[i+n-1]-F[i]<min)	min = F[i+n-1]-F[i];
	}
	printf("%d\n",min);
	return 0;
}

