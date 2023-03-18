#include<stdio.h>
int main(){
	int n,i,j,count=0;double x0,x1,y0,y1,slope;scanf("%d%lf%lf",&n,&x0,&y0);int check[n];double X[n],Y[n];
	for(i=0;i<n;i++){	
		scanf("%lf %lf",&X[i],&Y[i]);
		check[i]=0;//because variable size array may not be initialized
	}
	for(i=0;i<n;i++){
	if(check[i]==0){
		for(j=i+1;j<n;j++){
			if(check[j]==0){
				if( (Y[j]-y0)*(X[i]-x0)==(Y[i]-y0)*(X[j]-x0) /*|| (Y[j]-y0)*(X[i]-x0)==(y0-Y[i])*(X[j]-x0)*/ ) check[j]=1;
			}
		}
	count++	;
	}
	}
	 printf("%d\n",count);
return 0;
}


