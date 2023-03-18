#include<bits/stdc++.h>
using namespace std;
int main(){
	int Max,n,x,chest=0,biceps=0,back=0;cin>>n;int A[n];
	for(int i=0;i<n;i++){
		cin>>x;
		if((i+1)%3==1){chest+=x;}
		else if((i+1)%3==2){biceps+=x;}
		else if((i+1)%3==0){back+=x;}
	}
	Max=max(chest,max(biceps,back));
//	cout<<chest<<" "<<biceps<<" "<<back<<" "<<Max<<"\n";
	
	if(Max==chest){cout<<"chest\n";}
	if(Max==biceps){cout<<"biceps\n";}
	if(Max==back){cout<<"back\n";}
	return 0;
}

