#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char ch;
	scanf("%c",&ch);
	printf("%c",toupper(ch));
	
	while(scanf("%c",&ch) && ch!='\n')
	{
		printf("%c",ch);
	}
	
	printf("\n");
	
	return 0;
}
		
