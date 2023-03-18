#include<stdio.h>
#include<string.h>

int main()
{
	char A[100];
	
	int i,j,k;
	
	int ticktick0=0,ticktick1=0;
	
	scanf("%s",A);
	
	int n = strlen(A);
	
	for(i=0;i<n;i++)
	{
		if(A[i]=='0')
		{
	
			ticktick1=0;
			ticktick0++;

			if(ticktick0==7)
			{
				printf("YES\n");
				return 0;
			}
		}
	
		if(A[i]=='1')
		{
			ticktick0=0;
			ticktick1++;

			if(ticktick1==7)
			{
				printf("YES\n");
				return 0;
			}
		}	
	}
	
	printf("NO\n");
	
	return 0;
}
		
		
					
					
	
	
