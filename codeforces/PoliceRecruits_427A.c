#include<stdio.h>
int main(){
	int n,x,fail=0,sum=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&x);if(x>0){sum+=x;}else{if(sum>=1){sum--;}else{fail++;}}}
	printf("%d\n",fail);
	return 0;
}
