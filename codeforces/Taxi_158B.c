#include<stdio.h>

int main()
{
	int n,count=0;

	scanf("%d",&n);

	int A[5]={0};	//by A, I mean Group Strength
	int G;

	for(int i=0;i<n;i++)
	{
		scanf("%d",&G);
		A[G]++;
	}
	
	int l= A[2]%2;
	A[2]/=2;
	int k = A[1]-A[3];
	
	if(k==0)
	{
		count = A[4]+A[3]+A[2]+l;
	}

	if(k>0)
	{
		if(k<=2)
		{
			count = A[4]+A[3]+A[2]+1;
		}
		
		else if(k>2&&l==0)
		{
			if(k%4)
			{
				count = A[4]+A[3]+A[2]+k/4+1;
			}
			else
			{
				count = A[4]+A[3]+A[2]+k/4;
			} 
		}
		
		else if(k>2&&l==1)
		{
			if((k-2)%4)
			{
				count = A[4]+A[3]+A[2]+1+(k-2)/4+1;
			}	
			else
			{
				count = A[4]+A[3]+A[2]+1+(k-2)/4;
			}
		}	
	}

	if(k<0)
	{
		count = A[4]+A[3]+A[2]+l;
	}
	
	printf("%d\n",count);
	return 0;
}

	
	
	
			
			
