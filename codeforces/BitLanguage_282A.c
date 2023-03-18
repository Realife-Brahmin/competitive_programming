#include<stdio.h>

int main()
{
	int n,N;
	int X=0;
	scanf("%d",&n);

	char A[10];	

	for(N=0;N<n;N++)
	{
		scanf("%s",A);
		
		if(A[1] == '+')	
		{
			++X;
		}
		
		else
		{
			--X;
		}
		
	}
	
	printf("%d\n",X);
	
	return 0;
}
