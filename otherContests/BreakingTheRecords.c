#include<stdio.h>
int main(){
	 int n;scanf("%d",&n);
	 int a;scanf("%d",&a); int min=a,max=a,mincount=0,maxcount=0;
	for(int i=1;i<n;i++){
		scanf("%d",&a);
		(a>max)?(max=a,maxcount++):(max=max);
		(a<min)?(min=a,mincount++):(min=min);
	}
	printf("%d %d\n",maxcount,mincount);
return 0;
}
				
