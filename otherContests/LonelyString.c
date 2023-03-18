#include<stdio.h>
#include<string.h>
int main(){
	long long int p,q,i; scanf("%lld%lld",&p,&q);
	char A[1000000],B[1000000]; scanf("%s",A); scanf("%s",B); int a=strlen(A); int b=strlen(B);
	while(p>1){
		strcat(A,A);
		p--;
	}
	while(q>1){
		strcat(B,B);
		q--;
	}
	long long int sum=0;
	for(i=0;i<(a*p);i++)
	{
		if(A[i]!=B[i]){ sum++;}
	}
	printf("%lld\n",sum);
}
		
