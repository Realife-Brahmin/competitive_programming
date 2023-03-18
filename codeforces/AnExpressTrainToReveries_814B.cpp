#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j=0,k=0,x,y;cin>>n;int A[n],B[n],mark[2],undone[2],done[1001]={0},last[n];;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		cin>>B[i];
		if(B[i]==A[i]){done[B[i]]++;}
		else if(B[i]!=A[i]){mark[k]=i;k++;}
	}
	for(int i=0;i<n;i++){
		if(done[i+1]==0){undone[j]=i+1;j++;}
	}

	x=mark[0];y=mark[1];int u1=undone[0],u2=undone[1];
	for(int i=0;i<n;i++){
		if(j==2){
			if(i!=x&&i!=y){last[i]=A[i];}
			if(i==x){
				if( (A[x]==u1||B[x]==u1) && (A[y]==u2||B[y]==u2) ){last[x]=u1;last[y]=u2;}
				if( (A[x]==u2||B[x]==u2) && (A[y]==u1||B[y]==u1) ){last[x]=u2;last[y]=u1;}
			}	
		}
		else if(j==1){
			if(i!=x){last[i]=A[i];}
			else if(i==x){last[x]=u1;}
		}
	}

	for(int i=0;i<n;i++){
		cout<<last[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
		


		
	
