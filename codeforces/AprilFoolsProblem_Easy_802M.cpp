#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;int A[n];for(int i=0;i<n;i++){cin>>A[i];}
	sort(A,A+n);
	int sum=0;for(int i=0;i<k;i++){sum=sum+A[i];}
	cout<<sum<<"\n";return 0;
}

