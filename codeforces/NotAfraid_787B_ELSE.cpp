#include<bits/stdc++.h>
using namespace std;
bool com(int a,int b){
		return abs(a)<abs(b);
}
int main(){
		int n,m,k,v[10001],flag;
			cin>>n>>m;
				for(int i=1;i<=m;i++){
							flag=1;
									cin>>k;
											for(int j=1;j<=k;j++)cin>>v[j];
													sort(v+1,v+k+1,com);
															for(int j=1;j<k;j++)
																		if(v[j]+v[j+1]==0){
																						flag=0;
																									break;
																											}
																	if(flag){
																				cout<<"YES";
																						return 0;
																							    }
																	    }
					cout<<"NO";
}

