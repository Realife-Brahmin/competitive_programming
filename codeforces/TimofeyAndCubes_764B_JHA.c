#include<stdio.h>

void swap(int *a, int *b)       //definition
{
        int tmp = *a;
        *a = *b;
        *b = tmp;

        return; //optional
}

void antiRev(int n,int step, int A[])	//specification
{
	int i;
	for(int i=step;i<=(n+1)/2;i++)
	{
		swap(&A[i],&A[n-i+1]);
	}
	
	return;	//optional
}

void swap(int *a, int *b);	//declaration

void antiRev(int n,int step,int A[]);	//prototype
	
int main()
{
	int n,i,step;
	int START =0;
	scanf("%d",&n);
	int laststep=n/2;
	if(n%2)
	{
		laststep = (n+1)/2;
	}

	int A[n];

	for(i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(step=laststep;step>START;step--)
	{
		antiRev(n,step,A);
		
		printf("Before step %d,it looked like:\n",step);
		for(i=1;i<=n;i++)
		{
			printf("%d ",A[i]);
		}
		printf("\n");
	
	}
		
	for(i=1;i<=n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	
	return 0;
}
	
	
