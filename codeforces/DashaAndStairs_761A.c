#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a-b>=2||a-b<=-2 ||(a==0&&b==0))
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}
