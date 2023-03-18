#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int i,e=0,A[4];
	cin >> A[0]>>A[1]>>A[2]>>A[3];
	sort(A,A+4);
	for(i=0;i<3;i++){
		if(A[i]==A[i+1]){e++;}
	}
	cout<<e<<endl;
return 0;}	
			
	

