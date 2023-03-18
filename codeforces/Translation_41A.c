#include<stdio.h>
#include<string.h>
int main(){
	char ch,A[100]; scanf("%s",A); int i=0,n=strlen(A); char B[n]; scanf("%s",B);
	while(i<n){
		if(B[i]!=A[n-i-1]) { printf("NO\n"); return 0;}
		i++;
	}
	printf("YES\n");
return 0;
}
	
