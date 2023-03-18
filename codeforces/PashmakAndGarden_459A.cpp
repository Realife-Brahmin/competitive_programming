#include<bits/stdc++.h>
using namespace std;

int main(){
       	double x1,y1,x2,y2,x3,y3,x4,y4,l;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2){l=abs(y1-y2);x3=x1+l;x4=x2+l;y3=y1;y4=y2;
			cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";return 0;}
	if(y1==y2){l=abs(x1-x2);y3=y1+l;y4=y2+l;x3=x1;x4=x2;
			cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";return 0;}
	if(abs(x1-x2)==abs(y1-y2)){
			x3=x1;x4=x2;y3=y2;y4=y1;
			cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";return 0;}
	else{printf("-1\n");return 0;}
}
	
