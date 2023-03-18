#include<bits/stdc++.h>
using namespace std;
int main(){
	int two,three,five,six,f1,f2,s1=0,s2=0,sum;
	cin>>two>>three>>five>>six;
	f1=min(six,min(five,two));
	two-=f1;
	f2=min(three,two);
	cout<<256*f1+32*f2<<"\n";
	return 0;
}

	
	

