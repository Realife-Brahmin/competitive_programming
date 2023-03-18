#include<stdio.h>
int main(){
	int a,b,i,j,k,p1=0,draw=0,p2=0,tmp,smp;
	scanf("%d%d",&a,&b);int A=a,B=b;
	for(k=1;k<=6;k++){
		a=A;b=B;
		i=k;j=k;
		if(a<i){tmp=a;a=i;i=tmp;/*printf("Now a=%d,i=%d\n",a,i);*/}
		if(b<j){smp=b;b=j;j=smp;/*printf("Now b=%d,j=%d\n",b,j);*/}
		if(a-i<b-j){p1++;
		/*printf("Now p1=%d\n",p1);*/}
		else if(a-i>b-j){p2++;
		/*printf("Now p2=%d\n",p2);*/}
		else if(a-i==b-j){draw++;
		/*printf("k=%d Since %d-%d==%d-%d, Now draw=%d\n",k,a,i,b,j,draw);*/}

	}
	printf("%d %d %d\n",p1,draw,p2);
	return 0;
}

