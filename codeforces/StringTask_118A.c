#include<stdio.h>	
#include<string.h>

void deleteVow(int *n, char A[])	//specification
{
	int i,j;
	for(i=0;i<*n;i++)
	{
		char k = A[i];
		
		if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u' || k=='y' || k=='A' || k=='E' || k=='I' || k=='O' || k=='U' || k=='Y')
		{
			for(j=i;j<*n-1;j++)
			{
				A[j]=A[j+1];
			}
			
			(*n)--;

			if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u' || k=='y' || k=='A' || k=='E' || k=='I' || k=='O' || k=='U' || k=='Y')
			{
				i--;
			}
		
		}
	}
	
	return;	//optional
}

void dotBeforeCon(int *n,char A[])	//specification
{
	int m = *n;
	for(int I=0; I<2*m; I=I+2)
	{
		if(A[I]>=97&&A[I]<=122)
		{	
			for(int j=*n-1;j>=I;j--)
			{	
				A[j+1] = A[j];
			}
			
			A[I]='.';
		
			(*n)++;
		}
	}
	
	return;	//optional
}
		
char conToLower(char c)	//specification
{
	if(c>=65&&c<=90)
	{
		return c+32;
	}	
	
	return c;
}

void deleteVow(int *n,char A[]);//prototype

void dotBeforeCon(int *n, char A[]);	//prototype

char conToLower(char c);	//prototype

int main()
{
	char A[300];
	scanf("%s",A);
	
	int n = strlen(A);

	deleteVow(&n,A);	//call

	for(int i=0;i<n;i++)
	{
		A[i] = conToLower(A[i]);	//call
	}

	dotBeforeCon(&n,A);	//call

	for(int i=0;i<n;i++)
	{
		printf("%c",A[i]);	//call
	}
	
	printf("\n");

	return 0;
}
	
