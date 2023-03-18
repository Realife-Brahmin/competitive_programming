#include<stdio.h>
#include<string.h>

int class(int N)
{
	if(N>=1&&N<=127) return 1;
	else if(N>=128&&N<=191) return 2;
	else if(N>=192&&N<=223) return 3;
	else if(N>=224&&N<=239) return 4;
	else if(N>=240&&N<=255) return 5;
	else if(N>255) return 6;
	else return 0;
}

int class(int N);

int main()
{
	int t,A=0,B=0,C=0,D=0,E=0,F=0;
	scanf("%d",&t);
	int a,b,c,d;
	char ab,bc,cd;
	for(int T=1;T<=t;T++)
	{
		scanf("%d %c %d %c %d %c %d",&a,&ab,&b,&bc,&c,&cd,&d);	
		if(a>255||b>255||c>255||d>255 || a==0){
			F++;
		}
		else{
		if(class(a)==1) A++;
		if(class(a)==2) B++;
		if(class(a)==3) C++;
		if(class(a)==4) D++;
		if(class(a)==5) E++;
		}
	}
	
	printf("class A-%d\n",A);
	printf("class B-%d\n",B);
	printf("class C-%d\n",C);
	printf("class D-%d\n",D);
	printf("class E-%d\n",E);
	printf("invalid-%d\n",F);
	
	return 0;
}

