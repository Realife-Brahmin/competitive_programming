#include<bits/stdc++.h>
using namespace std;
#define base 1000000007
typedef long long int ll;
int main(){
	int i,j,n;
	ll A[300005],len,subsets;
	cin>>n;
	ll sum=0;
	for(i=0;i<n;i++){cin>>A[i];}
	sort(A,A+n);

	ll B[300001];
	B[0]=1;
	for(int i=1;i<n;i++){
		B[i]=(2*B[i-1])%base;
	}
		
	for(i=1;i<n;i++){
		len=A[i]-A[i-1];
		//The two adjacent elements contribute len to F(a) in
		//every subset (defined below)
		subsets=((B[i]-1)*(B[n-i]-1))%base;
		//these subsets have atleast one element to left of A[i] 
		//and atleast one element to the right of A{i-1]
		sum+=(len*subsets)%base;
	}
sum=sum%base;
cout<<sum<<"\n";
return 0;
}

