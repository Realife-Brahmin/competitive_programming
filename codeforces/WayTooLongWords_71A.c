#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	for(int T=1;T<=t;T++)
	{
		char A[100];
		scanf("%s",A);
	
		int n = strlen(A);
	
		if(n>10)
		{
			printf("%c%d%c\n",A[0],n-2,A[n-1]);
		}

		else
		{
			printf("%s\n",A);
		}
	}
	
	return 0;
}
