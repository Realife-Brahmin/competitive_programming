#include<stdio.h>
int main(){
	int n,a,b,count=1,max=1; scanf("%d",&n);
	scanf("%d",&a); b=a;
	for(int i=1;i<n;i++){
		scanf("%d",&a); (a>=b)?count++:(count=1);
		b=a; if(count>max) max=count;
	}
	printf("%d\n",max);
return 0;
}
		
