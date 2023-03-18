#include<stdio.h>
#include<string.h>

void swap(char *a, char *b)	//definition
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
	return;	//optional
}

void swap(char *a, char *b);	//declaration

int main()
{
	char A[100];
	
	scanf("%s",A);
	
	int n = strlen(A);
	
	for(int i=0;i<n && n>=3;i+=2)
	{
		for(int j=i+2;j<n;j+=2)
		{
			if(A[i]>A[j])
			{
				swap(&A[i],&A[j]);
			}
		}
	}
	
	printf("%s\n",A);
	
	return 0;
}
