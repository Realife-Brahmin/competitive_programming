#include<stdio.h>
int main(){
	long long int n; scanf("%I64d",&n);
	if(n%2){	long long int N= (n-1)/2; printf("%I64d\n",N-n);}
	else{ long long int N=n/2; printf("%I64d\n",N); }
return 0;
}
