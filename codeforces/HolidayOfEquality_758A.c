#include<stdio.h>

int main()
{
	int n,a,MAX=0,sum=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		MAX = (a>MAX)?a:MAX;
		sum +=a;
	}
	
	int ANS = MAX*n - sum;
	printf("%d\n",ANS);
	
	return 0;
}
