#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;int max=0,Letters[26]={0},flag=0;
	string s;cin>>s;int n=s.length(),allowed=0;
	for(int i=0;i<n;i++){
		if(Letters[s[i]-97]==0&&allowed<s[i]-97){cout<<"NO\n";return 0;}
		else if(Letters[s[i]-97]==0&&allowed>=s[i]-97){allowed++;}
		Letters[s[i]-97]++;
	}

	for(int i=25;i>=0;i--){
		if(flag==0&&Letters[i]!=0){
			flag++;
		}
		else if(flag==1&&Letters[i]==0){
			cout<<"NO\n";return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}


