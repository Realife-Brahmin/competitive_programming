#include<bits/stdc++.h>
using namespace std;
int main(){
	string A;
	cin>>A;int n=A.length();
	if(n==1){
		switch(A[0]){
		case '0':{cout<<"zero\n";break;}
		case '1':{cout<<"one\n";break;}
		case '2':{cout<<"two\n";break;}
		case '3':{cout<<"three\n";break;}
		case '4':{cout<<"four\n";break;}
		case '5':{cout<<"five\n";break;}
		case '6':{cout<<"six\n";break;}
		case '7':{cout<<"seven\n";break;}
		case '8':{cout<<"eight\n";break;}
		case '9':{cout<<"nine\n";break;}
		}
		return 0;
	}
	else if(n==2&&A[0]=='1'){
		switch(A[1]){
		case '0':{cout<<"ten\n";break;}
		case '1':{cout<<"eleven\n";break;}
		case '2':{cout<<"twelve\n";break;}
		case '3':{cout<<"thirteen\n";break;}
		case '4':{cout<<"fourteen\n";break;}
		case '5':{cout<<"fifteen\n";break;}
		case '6':{cout<<"sixteen\n";break;}
		case '7':{cout<<"seventeen\n";break;}
		case '8':{cout<<"eighteen\n";break;}
		case '9':{cout<<"nineteen\n";break;}
		}
		return 0;
	}
	else if(n==2&&A[0]!='1'){
		switch(A[0]){
		case '1':{cout<<"WTF!?\n";break;}
		case '2':{cout<<"twenty";break;}
		case '3':{cout<<"thirty";break;}
		case '4':{cout<<"forty";break;}
		case '5':{cout<<"fifty";break;}
		case '6':{cout<<"sixty";break;}
		case '7':{cout<<"seventy";break;}
		case '8':{cout<<"eighty";break;}
		case '9':{cout<<"ninety";break;}
		}
		switch(A[1]){
		case '0':{cout<<"\n";break;}
		case '1':{cout<<"-one\n";break;}
		case '2':{cout<<"-two\n";break;}
		case '3':{cout<<"-three\n";break;}
		case '4':{cout<<"-four\n";break;}
		case '5':{cout<<"-five\n";break;}
		case '6':{cout<<"-six\n";break;}
		case '7':{cout<<"-seven\n";break;}
		case '8':{cout<<"-eight\n";break;}
		case '9':{cout<<"-nine\n";break;}
		}
		return 0;
	}
}
		
		
		
	
		





