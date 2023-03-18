#include<stdio.h>
int main(){
	int n,a,count=0;scanf("%d %d",&n,&a);int A[n],min=a,max=a;A[0]=a;
	for(int i=1;i<n;i++){
		scanf("%d",&a);A[i]=a;
		(a>max)?(max=a):(max=max);
		(a<min)?(min=a):(min=min);
	}
	for(int i=0;i<n;i++){
		if(A[i]!=min&&A[i]!=max) count++;
	}
	printf("%d\n",count);
return 0;
}
