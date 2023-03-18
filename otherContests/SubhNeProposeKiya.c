#include<stdio.h>
int main(){
	int t,a,b,m; scanf("%d",&t);
	long long int v;
	
	for(int T=0;T<t;T++){
		scanf("%d%d%d",&a,&b,&m);
		int ANS=0,x=0; int A[1000000]={0};
		v=((a*x)+b)%m;
		while(A[((a*x)+b)%m]!=1){
			v=((a*x)+b)%m;
			if(A[v]==0) { A[v]++;ANS++;}
			
			x++;
		}
		printf("%d\n",ANS);
	}
	return 0;
}	
