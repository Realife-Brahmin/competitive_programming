#include<stdio.h>

int main()
{
	int n,X=0,Y=0,Z=0,x,y,z;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&x,&y,&z);
		X+=x;Y+=y;Z+=z;
		//printf("%d %d %d\n",X,Y,Z);
	}
	
	(X==0&&Y==0&&Z==0)?printf("YES\n"):printf("NO\n");
	return 0;
}
