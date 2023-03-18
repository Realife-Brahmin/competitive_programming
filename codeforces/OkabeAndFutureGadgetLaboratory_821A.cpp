#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n;cin>>n;ll A[n][n],B[100001];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(A[i][j]>1){
				int row=i,col=j;
				for(int k=0;k<n;k++){
					for(int l=0;l<n;l++){
						if(row!=l&&col!=k){
							ll sum=A[row][k]+A[l][col];
							if(sum<=100000){B[sum]++;
					//		cout<<"B["<<sum<<"]++, = "<<B[sum]<<"\n";	
							}
						}
					}
				}
				if(B[A[i][j]]==0){cout<<"No\n";return 0;}
				for(int a=0;a<=100000;a++){B[a]=0;}
			}
		}
	}
	cout<<"Yes\n";
	return 0;
}


		
			
			
			
	
