#include<stdio.h>
typedef long long int ll;
ll a[32000];
int main(){
	ll n,i,k,count=0,q=0;
	scanf("%I64d%I64d",&n,&k);
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			a[q]=i;//printf("Factor #%lld is %lld\n",q+1,i);
			q++;
		if(n/i!=i) count=count+2;
		else if (n/i==i) count=count+1;
		}
	}
	if(count<k) printf("-1\n");
	else if(k<=count/2) printf("%I64d\n",a[k-1]);
	else if(k>count/2) printf("%I64d\n",n/a[count-k]);
}
