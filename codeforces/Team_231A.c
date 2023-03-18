#include<stdio.h>

int main()
{
	int n,N,x,sum=0,count=0;
	scanf("%d",&n);
	
	for(N=1;N<=n;N++)
	{
		for(int i=0;i<3;i++)
		{
			scanf("%d",&x);
			sum+=x;
		}
		
		if(sum>=2)
		{
			count++;
		}
		
		sum=0;
	}
	
	printf("%d\n",count);
	
	return 0;
}
