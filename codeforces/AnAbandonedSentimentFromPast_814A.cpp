#include<bits/stdc++.h>
using namespace std;

int sortedOrNot(int n,int A[]){
	int i,max=A[0],C[201]={0};
	for(int i=1;i<n;i++){
		C[A[i]]++;
		if(A[i]<max){return 0;}	/*Not Sorted*/	
		else if(A[i]>=max){max=A[i];}
	}
	if(C[A[0]]==n-1){return 0;}
	return 1;	/*Yes, Sorted*/
}

int sortedOrNot(int n,int A[]);

int main(){
	int n,k,i,j=0;cin>>n>>k;int a[n],b[k];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<k;i++){
		cin>>b[i];
	}
	
	sort(b,b+k);
	int REVb[k];
	j=0;
	for(int i=0;i<k;i++){REVb[i]=b[k-i-1];}

	for(int i=0;i<n;i++){
		if(a[i]==0){
			a[i]=REVb[j];j++;
		}
	}
	/*for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	*/	
	int x=sortedOrNot(n,a);

	if(x==0){cout<<"Yes\n";return 0;}

	else{cout<<"No\n";return 0;}
	
}
	
