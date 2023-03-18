#include<stdio.h>

int main()
{
	long long int n,m,a,M,N;
	scanf("%lld %lld %lld",&n,&m,&a);
	
	M = m/a;
	
	if(m%a)
	{
		M++;
	}
	
	N = n/a;
	
	if(n%a)
	{
		N++;
	}
	
	long long int ANS = M*N;
	
	printf("%lld\n",ANS);
		
	return 0;
}
