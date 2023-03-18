#include<stdio.h>
int main(){
	int t,s,x,i;scanf("%d%d%d",&t,&s,&x);
	if(x==t){printf("YES\n");return 0;}
	for(i=t+s;i<=x;i+=s){if(i==x||i+1==x){printf("YES\n");return 0;}}
	printf("NO\n");return 0;}
	
			
