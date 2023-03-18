#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,i,b,A[35];
	cin>>a>>b;int B=b;
	for(i=1;b!=a;i++){
		if(b%10==1){b/=10;A[i]=b;continue;
		}
		else if(b%2==0){
			b/=2;A[i]=b;continue;
		}
		else{
			cout<<"NO\n";return 0;
		}
	}
	cout<<i<<"\n";
	A[0]=B;
	reverse(A,A+i);
	for(int j=0;j<i;j++){
		cout<<A[j]<<" ";
	}
	cout<<"\n";
}


