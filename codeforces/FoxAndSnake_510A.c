#include<stdio.h>
int main(){
	int n,m,r,c;scanf("%d%d",&n,&m);
		for(r=1;r<=n;r++){
			/*odd row*/if(r%2){ for(c=1;c<=m;c++){printf("#");}printf("\n");}
			else if(r%4){for(c=1;c<=m-1;c++){printf(".");}printf("#\n");}
			else {printf("#");for(c=2;c<=m;c++){printf(".");}printf("\n");}
			}
return 0;
} 
