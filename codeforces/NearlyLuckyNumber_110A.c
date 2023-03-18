#include<stdio.h>

int isLucky(int N)      //definition
{
	if(N==0)	return 0;

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

int isLucky(int N);     //declaration

int main()
{
	long long int n,count=0;
	scanf("%I64d",&n);
	while(n!=0)
	{
		if(n%10==4||n%10==7) { 	count++; /*printf("count is now: %I64d\n",count);*/}
		n/=10;
	}
	
	(isLucky(count))?printf("YES\n"):printf("NO\n");	//call
	return 0;
}
	
	
	
