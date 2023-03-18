#include<stdio.h>
int main(){
	int N,Q;scanf("%d %d",&N,&Q); int Giver[Q],Taker[Q];
	for(int T=0;T<Q;T++){
		scanf("%d %d",&Giver[T],&Taker[T]);
	}
	int x;scanf("%d",&x);
	int f=0,s=0,t=0;
	for(int T=0;T<Q;T++){
		if(Giver[T]==x){
			f++; for(int U=0;U<Q;U++){
				if(Giver[U]==Taker[T]){
					s++; for(int V=0;V<Q;V++){
						if(Giver[V]==Taker[U]){
							t++;}
						}
					}
				}
			}
	}
	printf("%d %d %d\n",f,s,t);
return 0;
}
	
