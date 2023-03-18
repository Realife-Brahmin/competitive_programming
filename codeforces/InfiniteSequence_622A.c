#include<stdio.h>
#include<math.h>
int main(){
	long long int n,cycles,left,i;
	scanf("%I64d",&n);for(i=sqrt(2*n)-1;(i*i+i)/2<=n;i++){cycles=i;}
	left=n-((cycles)*(cycles+1))/2;if(left==0){left=cycles;}printf("%I64d\n",left);
	return 0;
}

