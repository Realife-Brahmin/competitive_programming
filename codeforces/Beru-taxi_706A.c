#include<stdio.h>
#include<math.h>

int main(){
	int x0,y0,n,x1,y1,a,b,v;double c,min=1000000;scanf("%d%d%d",&x0,&y0,&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&x1,&y1,&v);if(x1==x0&&y1==y0){printf("0\n");return 0;}
		a=x1-x0;b=y1-y0;c = (sqrt(pow(a,2)+pow(b,2)))/v;
		if((double)c<min )
			{ min =c; }
	}
	printf("%.15lf\n",min);
return 0;
}
		
