#include<stdio.h>
int main(){
	int n,x,min=0,max=0,l,r,ans;scanf("%d",&n);int A[n];for(int i=0;i<n;i++){
					scanf("%d",&x);if(x==1){min=1;l=i;}else if(x==n){max=n,r=i;}
	}
	if(l>r){int tmp=l;l=r;r=tmp;}
	(n-1-l>=r/*r-0*/)?printf("%d\n",n-1-l):printf("%d\n",r);
	return 0;}
