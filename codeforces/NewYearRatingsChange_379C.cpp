#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	ll n,x;cin>>n;
	ll A[n],B[n];for(int i=0;i<n;i++){cin>>A[i];}
	sort(A,A+n);
	ll done=A[0];cout<<A[0]<<" ";

	for(int i=1;i<n;i++){
		if(done>=A[i]){
			done++;cout<<done<<" ";
		}
		else{
			done=A[i];cout<<done<<" ";
		}
	}
	cout<<"\n";		
	return 0;
}
