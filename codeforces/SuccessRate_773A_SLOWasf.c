#include<stdio.h>
int main(){
	int  t,T,count=0;
	double x,y,p,q;
	scanf("%d",&t);for(T=0;T<t;T++){
		scanf("%lf%lf%lf%lf",&x,&y,&p,&q);
		if(p==1&&q==1){printf("-1\n");continue;}
		while(x/y!=p/q){
			while(x/y<p/q){
				x++;y++;count++;}
			while(x/y>p/q){
				y++;count++;}
		}
		printf("%d\n",count);count=0;
	}
	return 0;
}
