#include<stdio.h>
int main(){
	int i,j,x,elephant=0,bear=0,A[10]={0},count=0,good=0;
	for(i=0;i<6;i++){
		scanf("%d",&x);A[x]++;
		if(A[x]==1){count++;}
		if(A[x]==4){good=1;}
		if(A[x]==5){bear=1;}
		if(A[x]==6){elephant=1;bear=0;}
	}
	if(elephant){printf("Elephant\n");return 0;}
	else if(bear){printf("Bear\n");return 0;}
	if(good){(count==3)?printf("Bear\n"):printf("Elephant\n");return 0;}
	else printf("Alien\n");return 0;
}

