#include<stdio.h>
typedef long long int ll;
int main(){
	ll ten=1,n,count=0,extra;int i,digits=0;scanf("%I64d",&n);ll n1=n;
	while(n1!=0){
		n1/=10;digits++;
	}
	//printf("DIgits=%d\n",digits);
	for(int i=1;i<digits;i++){
		extra=9*ten*i;
		ten*=10;
		count+=extra;
	//printf("We covered %d Digit nos. and our count is now %I64d\n",i,count);
	}
	count+=digits*(n+1-ten);

	printf("%I64d\n",count);return 0;
}
	
