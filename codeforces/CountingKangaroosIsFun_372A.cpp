#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;cin>>n;int N=n;int A[n];for(int i=0;i<n;i++){cin>>A[i];}
	sort(A,A+n);
	int max,high=A[n-1];
	for(int i=n-1;i>=0;i--){
		if(A[i]<=high/2){
			max=i;i=-1;continue;
		}
	}
	while(max>-1){
		for(int i=n-1,j=max;i>max&&j+1>0;i--,j--){
		if(A[i]>=2*A[j]){count++;cout<<"Count now "<<count<<" at i="<<i<<" and j="<<j<<"\n"<<"as "<<A[j]<<" can fit in "<<A[i]<<"\n"; }
		}	
	n=n-count-1;
		for(int i=n-1;i>=0;i--){
			if(A[i]<=high/2){
				max=i;i=-1;continue;
			}
		}
		
	}
	cout<<N-count<<"\n";
	return 0;
}
