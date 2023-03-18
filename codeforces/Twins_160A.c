#include<stdio.h>

void swap(int *a,int *b)        //definition
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
        return; //optional
}

void revSort(int N,int A[])     //definition
{
        for(int i=0;i<N;i++)
        {
                for(int j=i+1;j<N;j++)
                {
                        if(A[i]<A[j])
                        {
                                swap(&A[i],&A[j]);      //invocation
                        }
                }
        }
}

void swap(int *a,int *b);       //declaration

void revSort(int N,int A[]);    //declaration

int main()
{
	int n,sum=0,you=0,count=0;
	scanf("%d",&n);
	int A[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		sum+=A[i];
	}
	
	revSort(n,A);
	
	for(int i=0;i<=n;i++)
	{
		if(you>sum/2)
		{
			printf("%d\n",count);
			return 0;
		}
	
		you+=A[i];
		count++;
	}
	
}
