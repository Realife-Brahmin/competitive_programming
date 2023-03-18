#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n,ans=0,turn=1;cin>>n;
	stack<ll> st;
	for(ll i=0;i<2*n;i++){
		string s;cin>>s;
		if(s[0]=='a'){ll x;cin>>x;st.push(x);}
		else if(s[0]=='r'){
			if(!st.empty()){
				if(st.top()==turn){st.pop();}
				else if(st.top()!=turn){
					while(!st.empty()){st.pop();}
					ans++;
				}
			}
			turn++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}

