#include<stdio.h>
int main(){
	int a,b,n,g=1,i;scanf("%d%d",&n,&a);b=a;
	for(i=2;i<=n;i++){
		scanf("%d",&a);if(a!=b){g++;}
		b=a;
	}
printf("%d\n",g);
}
