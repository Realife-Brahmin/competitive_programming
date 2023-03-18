#include<stdio.h>
#include<math.h>
//Sheldon, Leonard, Penny, Rajesh, Howard. The first person is Sheldon.
int main(){
	int n,c,cycles,/*copy of c*/sumc=0,sum/*copy of sumc*/;scanf("%d",&n);
	for(c=0;sumc<=n;c++){
		sum=sumc;cycles=c-1;
		if(c==0) continue;
		sumc+=5*pow(2,c-1);
	}
	int left=n-sum;
	if(left==0){printf("Howard\n");}
	else{
		int x= left/pow(2,cycles);
		int w = pow(2,cycles);
		if(left%w==0) x--;
			switch(x){
			//case -1:printf("Howard\n");break;
			case 0: printf("Sheldon\n");break;
			case 1: printf("Leonard\n");break;
			case 2: printf("Penny\n");break;
			case 3: printf("Rajesh\n");break;
			case 4: printf("Howard\n");
		}
	}
	return 0;
}			
