#include<stdio.h>
int main(){
	int m,d; scanf("%d%d",&m,&d);
	if(m==2){ (d==1)?printf("4\n"):printf("5\n");}
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		(d>5)?printf("6\n"):printf("5\n");}
	else{
		(d>6)?printf("6\n"):printf("5\n");}
return 0;
}
