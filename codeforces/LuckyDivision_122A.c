#include<stdio.h>
#include<math.h>

int isLucky(int N)	//definition
{
	while(N!=0)
	{
		if(N%10!=7&&N%10!=4)
		{
			return 0;
		}
		N/=10;
	}
	
	return 1;
}

int isLucky(int N);	//declaration

int main()
{
	int N;
	scanf("%d",&N);
	
	if(isLucky(N))	
	{
		printf("YES\n"); return 0;
	}
	
	for(int i=1;i<=N;i++)
	{
		if(N%i==0 && isLucky(i)==1)	/*call*/	
		{
			printf("YES\n");
			return 0;
		}
	}
	
	printf("NO\n");
	return 0;
}
	
	
	
