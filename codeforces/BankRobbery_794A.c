#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	int locker,count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&locker);
		if(locker>b&&locker<c)
			count++;
	}
	printf("%d\n",count);
}
