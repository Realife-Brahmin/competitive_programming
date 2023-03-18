#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,x,traitor,P[10001],N[10001];cin>>n>>m;
    for(int i=0;i<m;i++){
	    traitor=0,P[10001]={0},N[10001]={0};
	    cin>>k;
        for(int j=0;j<k;j++){ cin>>x;
            if(x<0){
                if(P[abs(x)]>=1){j=k;traitor--;continue;}
                else{N[abs(x)]++;}
            }
            else if(x>0){
                if(N[x]>=1){j=k;traitor--;continue;}
                else{P[x]++;}
            }
            
        }
        if(traitor==0){cout<<"YES\n";return 0;}
    }
    cout<<"NO\n";return 0;
}
   
