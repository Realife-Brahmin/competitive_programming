#include<stdio.h>
int main(){
	int n,max,min,left,leftmin=0;
	scanf("%d",&n);
	left=n%7;
	if(left==6){leftmin=1;}
	if(left>=2){left=2;}
	max=(n/7)*2+left;
	min=(n/7)*2+leftmin;
	printf("%d %d\n",min,max);
	return 0;}
