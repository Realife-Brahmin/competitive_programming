#include<stdio.h>
int main(){
	int n,i;scanf("%d",&n);int ans=0;
	int h,g,A[101]={0},H[101]={0},G[101]={0};
	for(i=1;i<=n;i++){
		scanf("%d%d",&h,&g);if(H[h]){A[i]=0;}else{A[i]=h;}H[h]++;G[g]++;
	}
	for(i=1;i<=n;i++){
		ans+=H[A[i]]*G[A[i]];
	//	printf("Ans is now = %d\n",ans);
	}
	
	printf("%d\n",ans);
}
