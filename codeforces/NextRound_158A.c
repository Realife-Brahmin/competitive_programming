#include<stdio.h>
	
int main()
{
	int n,k;
	int A[100];
	
	scanf("%d %d",&n,&k);
	
	int count = k;

	for(int N=1;N<=n;N++)
	{
		scanf("%d",&A[N]);
	}
	
	for(int N=1;N<=k;N++)
	{
		if(A[N]==0)
		{
			count--;
		}
	}

	for(int N=k+1;N<=n;N++)
	{
		if(A[N]==A[k] && A[k]!=0)
		{
			count++;
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
