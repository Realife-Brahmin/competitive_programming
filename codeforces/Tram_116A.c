#include<stdio.h>

int main()
{
	int n,popcap=0;
	scanf("%d",&n);
	int A[10];
	int C[n];

	for(int N=0;N<n;N++)
	{
		for(int i=0;i<2;i++)
		{
			scanf("%d",&A[i]);
		}
		
		popcap = popcap + A[1] - A[0];
		
		C[N] = popcap;

		//printf("C[%d] = %d\n",N,popcap); **Checkpoints!**
	}
	
	int Maxcap=0;

	for(int N=1;N<n;N++)
	{
		if(C[N]>C[Maxcap])
		{
			Maxcap = N;
		}
	}
	
	printf("%d\n",C[Maxcap]);
	
	return 0;
}			
