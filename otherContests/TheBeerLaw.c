#include<stdio.h>
int main(){
	int t,T;
	float C,A;
	scanf("%d",&t);
	for(int T=1;T<=t;T++){
		int n;
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			scanf("%f %f",&C,&A);
		}
		float b = A/C;
		float AU;
		scanf("%f",&AU);
		float ANS = AU/b;
		printf("%f\n",ANS);
	}
return 0;
}
		
