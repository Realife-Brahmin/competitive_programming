#include<bits/stdc++.h>
using namespace std;

int num(char h1,char h2,char m1,char m2){
	return 60*(10*(h1-48)+h2-48)+10*(m1-48)+(m2-48);
}

int main(){
	string s;cin>>s;
	int time=num(s[0],s[1],s[3],s[4]);
	//cout<<"time= "<<time<<" mins.\n";
	int T[16]={0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};
	for(int i=0;i<=14;i++){
		if(time==T[i]){cout<<"0\n";return 0;}
		if(time>T[i]&&time<=T[i+1]){cout<<T[i+1]-time<<"\n";return 0;}
	}
	cout<<1440-time<<"\n";
	return 0;
}


		
