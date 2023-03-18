#include<stdio.h>
#include<string.h>

int main()
{
	char ch;

	while(scanf("%c",&ch) && ch!='\n')
	{
		if(ch=='H'||ch=='Q'||ch=='9')
		{
			printf("YES\n");
			return 0;
		}
	}
	
	printf("NO\n");
	return 0;
}	
	

























	
	
