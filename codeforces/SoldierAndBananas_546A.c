#include<stdio.h>

int main()
{
	int k,n,w,ANS;
	scanf("%d %d %d",&k,&n,&w);
	int cost = k*(w*(w+1))/2;
	ANS = cost - n;
	if(ANS>=0)
	printf("%d\n",ANS);
	else
	printf("0\n");
	return 0;
}
