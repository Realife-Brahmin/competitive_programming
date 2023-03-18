#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n,i,u=1,max=0;cin>>n;int A[n];for(i=0;i<n;i++){cin>>A[i];}
	for(i=0;i<n;i++){
		if(A[i]==1){
			int l=1;i++;
			while(A[i]==1){l++;i++;
				//	cout<<"OK,length is now " 
				//	<<l<<" @ "<<i+1<<"th position\n";
				}
				//	cout<<"OK,roadblock detected @"<<i+1<<"th position\n";
				int I=i-1;
				if(A[i+1]==1){
				//	cout<<"continuation possible by linking"
				//	<<i-1<<" and "<<i+1<<"\n";
					u++;
					i++;
					while(A[i]==1){l++;i++;}
					//	cout<<"OK,length is now "
					//	<<l<<" @ "<<i+1<<"th position\n";
				}
				i=I;
				if(l>max){max=l;}
		}
	}
					
	if(u>=3){max++;}
	cout<<max<<"\n";
	return 0;
	}
