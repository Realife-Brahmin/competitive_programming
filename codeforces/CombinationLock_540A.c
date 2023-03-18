#include<stdio.h>
int main(){
	int n,i,ans=0;scanf("%d",&n);char O[n];char C[n];scanf("%s%s",O,C);for(i=0;i<n;i++){
		if(O[i]<C[i]){char tmp = O[i];O[i] = C[i];C[i]=tmp;}
		(O[i]-C[i]<=5)?(ans+=O[i]-C[i]):(ans+=10-O[i]+C[i]);
	}
	printf("%d\n",ans);
return 0;}
