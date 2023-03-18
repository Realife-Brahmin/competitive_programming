#include<stdio.h>
#include<string.h>

void deleteElement(int *n,char A[],int I)	//definition
{
	for(int i=I+1;i<*n;i++)
	{
		A[i-1]=A[i];
	}
	
	(*n)--;
	return;	//optional
}
	
void deleteElement(int *n,char A[],int I);	//declaration

int main()
{
	int n;
	scanf("%d",&n);
	char A[n];
	scanf("%s",A);
	int count = 0;
	
	for(int i=0;i<n;i++)
	{
	//	printf("Now i=%d\n",i); //check

		if(A[i]==A[i+1])
		{
			if(i==n-1)
			{
				//printf("Count++ by i==n-1, new count = %d; n=%d being latest strlen(A)\n",count,n);	//check
				continue;
			}

			deleteElement(&n,A,i+1);	//invocation

		/*	
			for(int i=0;i<n;i++)	//test function
			{
				printf("%c",A[i]);
			}
			printf("\n");
		*/
			
			i--;
			count++;
		//	printf("Count++, new count = %d\n",count);	//check
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
	
	
	
