#include<stdio.h>
int main(){
	int n,i,j,x,count;double k,sum=0;scanf("%d%lf",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&x);sum+=x;
		//printf("Sum is now %lf\n",sum);
	}
	double avg=(double)sum/n;
	//printf("Avg is now %lf\n",avg);
	for(count=0;avg<k-0.5;count++){
		sum+=k;
		avg=(double)(sum/(n+count+1));
		//printf("Sum is now %lf Count is now %d Avg is now %lf\n",sum,count,avg);
	}
	printf("%d\n",count);
	return 0;
}


