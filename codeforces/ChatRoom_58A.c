#include<stdio.h>
#include<string.h>

int main()
{
	char A[6] = "hello";
	char ch;
	int i=0;

	while( ( ch = getchar() ) && (ch!=EOF))
	{
		if(ch==A[i])
		{
			i++;
		}
		if(i==5)
		{
			printf("YES\n");
			return 0;
		}
	}
	
	printf("NO\n");
	return 0;
}
