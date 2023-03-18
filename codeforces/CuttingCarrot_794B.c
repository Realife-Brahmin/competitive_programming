#include<stdio.h>
#include<math.h>
int main(){
	int n,h;double x;scanf("%d%d",&n,&h);
	for(int i=1;i<n;i++){
		x= (double)(h*sqrt((double)i/n));
		printf("%.9f\n",x);
	}
return 0;
}
		
