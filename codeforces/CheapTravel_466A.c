#include<stdio.h>
int main(){
	int n,m,op/*original ticket price*/,mp/*m ticket price*/,sum=0;scanf("%d%d%d%d",&n,&m,&op,&mp);
	if(m>=n){
		(mp<=n*op)?(sum+=mp):(sum+=n*op);
	}
	if(m<n){
		if(op<=mp/m){sum+=n*op;}
		else{
			sum+=(n/m)*mp;n-=(n/m)*m;
			(mp<=n*op)?(sum+=mp):(sum+=n*op);
		}
	}
	printf("%d\n",sum);
return 0;
}
