#include<stdio.h>
#include<string.h>

int main()
{
	char A[100];
	scanf("%s",A);
	int n = strlen(A);
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		if(A[i]=='#')
		{
			continue;
		}
		
		count++;

		for(int j=i+1;j<n;j++)
		{
			if(A[j]==A[i])
			{
				A[j]='#';
			}
			
		}
	}
		
	if(count%2==0)
	{
		printf("CHAT WITH HER!\n");
	}
	else
	{
		printf("IGNORE HIM!\n");
	}
		
	return 0;
}
			
