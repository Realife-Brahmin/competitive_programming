#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double d;

d angle(d v,d n){return ((v-1)*180)/n;}

int main(){
	d a,v,n,min=180,ans;cin>>n>>a;

	for(v=2;v<n;v++){
		if(min>abs(angle(v,n)-a)){min=abs(angle(v,n)-a);ans=v;}
	}
	cout<<"1 "<<n<<" "<<ans<<"\n";
	return 0;
}
	
