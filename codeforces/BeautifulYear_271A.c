#include<stdio.h>
int dist(int N)		//distinct digits in year or not
{
	int B[10]={0};
	while(N!=0)
	{
		B[N%10]++;
		if(B[N%10]>1) {return 0;}
		N/=10;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=n+1;;i++)
	{
		if(dist(i)) { printf("%d\n",i); return 0;}
	}
}
