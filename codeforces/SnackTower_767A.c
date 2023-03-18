#include<stdio.h>
int main(){
	int n;scanf("%d",&n);int i,j,a,want=n,Has[100001]={0};
	for(i=0;i<n;i++){scanf("%d",&a);Has[a]++;
		while(Has[want]){
			printf("%d ",want);want--;}
		printf("\n");
	}
return 0;
}
