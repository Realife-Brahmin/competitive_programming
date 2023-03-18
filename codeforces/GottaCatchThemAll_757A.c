#include<stdio.h>
#include<string.h>

int main()
{
	char String[100000];
	char Word[8] = {"Bulbasr"}; 
	int Letters[256] = {0};
		//Letters stores the count of each of the (upto 256 possible) characters
	
	int minI = 0;
	char ch;
	
	while((ch = getchar()) && (ch!=EOF))
	{
		Letters[ch]++;
	}
	
	Letters['a']/=2;
	Letters['u']/=2;
	
	for(int i=1;i<7;i++)
	{
		if(Letters[Word[i]]<Letters[Word[minI]])
		{
			minI = i;
		}
	}
	
	printf("%d\n",Letters[Word[minI]]);	
		
	return 0;
}


