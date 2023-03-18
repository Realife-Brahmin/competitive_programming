#include<stdio.h>

int main()
{
	int n,m,z;
	int count=0;
	scanf("%d%d%d",&n,&m,&z);
	
	for(int i=1;i<=(z/n);i++)
	{
		if((i*n)%m==0)
		{
			count++;
		}
	}
	
	printf("%d\n",count);
	return 0;
}
