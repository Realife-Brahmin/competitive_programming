#include<stdio.h>
#include<string.h>
void replace_by_(char X[],char Y[]){	//declaration
	for(int i=0;i<12;i++){X[i]=Y[i];}
	return;	//optional
}

void replace_by_(char X[],char Y[]);	//prototype

int main(){
	char A0[12],A1[12],B0[12],B1[12];int n,DoI,DoO;	//DoI=dayOfInput,DoO=dayOfOutput
	scanf("%s%s%d",A0,B0,&n);printf("%s %s\n",A0,B0);
	for(int DoI=1;DoI<=n;DoI++){
		scanf("%s%s",A1,B1);
		if(strcmp(A1,A0)/*i.e. if(B0 is murdered)*/){replace_by_(B0,B1);}
		else{replace_by_(A0,B1);}
		printf("%s %s\n",A0,B0);
	}
	return 0;
}
