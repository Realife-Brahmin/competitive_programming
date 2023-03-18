#include<stdio.h>

void swap(int *a, int *b)
{
	int tmp =*a;
	*a=*b;
	*b=tmp;
	
	return;	//optional
}
	
void swapCols5(int A[][5],int i)
{
	for(int r=0;r<5;r++)
	{
		swap(&A[r][i],&A[r][i+1]);
	}
	
	return;	//optional
}

void swapRows5(int A[][5],int i)
{
	for(int c=0;c<5;c++)
	{
		swap(&A[i][c],&A[i+1][c]);
	}
	
	return;	//optional
}

void swap(int *a, int *b);

void swapCols5(int A[][5],int i);

void swapRows5(int A[][5],int i);

int main()
{
	int A[5][5];
	int r,c,R,C,count=0;

	for(int r=0;r<5;r++)
	{
		for(int c=0;c<5;c++)
		{	
			scanf("%d",&A[r][c]);
			if(A[r][c])
			{
				R=r;
				C=c;
			}
		}
	}
	
	while(C!=2)
	{
		if(C>2)
		{
			swapCols5(A,C-1);
			count++;
			C-=1;
		}
		else
		{
			swapCols5(A,C);
			C+=1;
			count++;
		}
	}
		
	while(R!=2)
	{
		if(R>2)
		{
			swapRows5(A,R-1);
			count++;
			R-=1;
		}
		else
		{
			swapRows5(A,R);
			R+=1;
			count++;
		}
	}
	
	printf("%d\n",count);
	return 0;
}
