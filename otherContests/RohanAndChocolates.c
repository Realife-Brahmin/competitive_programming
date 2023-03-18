#include<stdio.h>
	 
int main(){
	long long int r,c,s,ANS=0; scanf("%lld %lld",&r,&c);
	if(r==c) {printf("1\n"); return 0;}
	if(c>r) { int tmp=c;c=r;r=tmp;}
	
	while(c){
		s=(r*c)/(c*c); ANS+=s; r-=(c*s);
		if(c>r) { int tmp=c;c=r;r=tmp;}
	}	
	printf("%lld\n",ANS);
	return 0;	
}
	
