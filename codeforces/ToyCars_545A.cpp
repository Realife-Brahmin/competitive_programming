#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,good=0;cin>>n;int A[n][n],Good[101]={0},Bad[101]={0},Select[101]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];

		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(A[i][j]==0){
				if(Bad[i+1]==0){
					if(Good[i+1]==0){Good[i+1]++;}
				}
				if(Bad[j+1]==0){
					if(Good[j+1]==0){Good[j+1]++;}
				}
			}

			else if(A[i][j]==1){
				if(Bad[j+1]==0){
					if(Good[j+1]==0){Good[j+1]++;}
				}
				Bad[i+1]++;
			}

			else if(A[i][j]==2){
				if(Bad[i+1]==0){
					if(Good[i+1]==0){Good[i+1]++;}
				}
				Bad[j+1]++;
			}

			else if(A[i][j]==3){
				Bad[i+1]++;
				Bad[j+1]++;
			}
		}
	}
	for(int k=0;k<n;k++){
		if(Bad[k+1]==0){
			Select[good]=k+1;good++;}
	}
	cout<<good<<"\n";
	for(int k=0;k<good;k++){cout<<Select[k]<<" ";}
	cout<<"\n";
	return 0;
}
