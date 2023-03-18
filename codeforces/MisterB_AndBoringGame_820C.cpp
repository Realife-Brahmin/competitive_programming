#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll a,b,l,r,ans,x,y;cin>>a>>b>>l>>r;
	x=(l-a)%(a+b);
	y=(r-a)%(a+b);
	
	if(l<=a){
		if(r<=a){ans=r-l+1;}
		else if(r<=a+a){ans=a-l+1;}
		else if(r<=a+a+b){ans=a-l+1+r-2*a;}
		else if(r>a+a+b){ans=a-l+1+b;}
	}
	

	else if(l>a&&(x>=1&&x<=a)){
		if(r<=l+a-x){ans=1;}
		else if(r>l+a-x&&r<=l+a-x+b){ans=y-a+1;}
		else{ans=b+1;}
	}

	else if(l>a&&(x>a||x==0)){
		if(x==0){x=a+b;}
		else if(r<=l-x+b+a){ans=r-l+1;}
		else if(r>l-x+b+a&&r<=l-x+b+a+a){ans=a+b-x+1+1;}
		else if(r>l-x+b+a+a){
			if(r<l+b+a){ans=r-l-a+1+1;}
			else{ans=b+1;}
		}
	}

	cout<<ans<<"\n";
	return 0;
}
