#include<stdio.h>
#include<string.h>
#include<ctype.h>

int normalWord(int n,char A[])	//definition
{
	for(int i=1;i<n;i++)
	{
		if(A[i]>=65&&A[i]<=90 && A[i+1]>=97&&A[i+1]<=122)
		{
			return 1;
		}
		
		if(A[i]>=97&&A[i]<=122 && A[i+1]>=65&&A[i+1]<=90)
		{
			return 1;
		}
	}
	
	return 0;
}

int normalWord(int n,char A[]);	//declaration
		
int main()
{
	char A[100];
	scanf("%s",A);
	
	int n = strlen(A);

	if(n==1)
	{
		if(A[0]>=65&&A[0]<=90)
		{	
			A[0]=tolower(A[0]);
			printf("%s\n",A);
			return 0;
		}
		
		if(A[0]>=97&&A[0]<=122)
		{	
			A[0]=toupper(A[0]);
			printf("%s\n",A);
			return 0;
		}
	}
	
	if(normalWord(n,A)==1)	//invocation
	{
		printf("%s\n",A);
		return 0;
	}

	if(A[0]>=65&&A[0]<=90)
	{
		if(A[1]>=65&&A[1]<=90)	//to convert HTTP to http
		{
			for(int i=0;i<n;i++)
			{
				A[i] = tolower(A[i]);
			}
		
			printf("%s\n",A);
			return 0;
		}
		
		if(A[1]>=97&&A[1]<=122)	//to convert Lock to Lock (ya,same only :)
		{
			printf("%s\n",A);
			return 0;
		}	
	}
	
	else if(A[0]>=97&&A[0]<=122)
	{
		if(A[1]>=97&&A[0]<=122)
		{
			printf("%s\n",A);
			return 0;
		}
		
		else
		{
			A[0]-=32;

			for(int i=1;i<n;i++)
			{
				A[i]=tolower(A[i]);
			}
		
			printf("%s\n",A);
		
			return 0;
		}
	}
}
