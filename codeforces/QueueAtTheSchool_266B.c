#include<stdio.h>
#include<string.h>

int main()
{
	int n,t,i=0;
	scanf("%d%d",&n,&t);
	char A[n];
	scanf("%s",A);
	for(int T=1;T<=t;T++)
	{
		for(i=0;i<n;i++)
		{
			if(A[i]=='B'&&A[i+1]=='G')
			{	
				A[i]='G'; A[i+1]='B'; i++;
			}
		}
	}

	printf("%s\n",A);
	return 0;
}
			
