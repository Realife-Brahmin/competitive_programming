#include<bits/stdc++.h>

void deleteLast(int *n,int A[]){(*n)--;}

void deleteFirst(int *n,int A[]){
	for(int i=1;i<*n;i++){
		A[i-1]=A[i];
	}
	(*n)--;return;
}

void deleteLast(int *n,int A[]);
void deleteFirst(int *n,int A[]);

using namespace std;
int main(){
	int n,sum=0,p1=0,p2=0,turn=1;cin>>n;int A[n];for(int i=0;i<n;i++){cin>>A[i];}
		
	while(n!=0){
		if(A[0]>A[n-1]){
			if(turn){p1+=A[0];deleteFirst(&n,A);turn=0;}
			else{p2+=A[0];deleteFirst(&n,A);turn=1;}
		}
		else if(A[0]<=A[n-1]){
			if(turn){p1+=A[n-1];deleteLast(&n,A);turn=0;}
			else{p2+=A[n-1];deleteLast(&n,A);turn=1;}
		}
	}
	cout<<p1<<" "<<p2<<"\n";
return 0;
}
	
