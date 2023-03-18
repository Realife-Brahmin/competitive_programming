#include<stdio.h>
int main(){
	int a,b,c,x,n,ans=0;scanf("%d%d%d%d",&a,&b,&c,&n);int A[1000000005]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&x);A[x]++;
	}
	for(int j=b+1;j<c;j++){ans+=A[j];}
	//printf("A[6]==%d\n",A[6]);
	printf("%d\n",ans);
	return 0;
}

