#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char S1[100], S2[100];	
	scanf("%s",S1);
	scanf("%s",S2);
	
	int n = strlen(S1);
	
	for(int i=0;i<n;i++)
	{
		S1[i] = tolower(S1[i]);
		S2[i] = tolower(S2[i]);
		if(S1[i]>S2[i])
		{
			printf("1\n");
			return 0;
		}
		
		else if(S2[i]>S1[i])
		{
			printf("-1\n");
			return 0;
		}
	}
	
	printf("0\n");
	return 0;
}
