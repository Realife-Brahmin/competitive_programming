#include <bits/stdc++.h>
using namespace std;

struct times{
	int start,end;	
};
	
int compareEnd(times A,times B){
		if(A.end==B.end){
			return(A.start>B.start);	
		}
		return (A.end<B.end);
}
	

int main(){
	int T;cin>>T;for(int j=0;j<T;j++){
		int n;cin>>n;struct times t[n];
		for(int i=0;i<n;i++){
			cin>>t[i].start>>t[i].end;
		}
		sort(t,t+n,compareEnd);
		int count=1,till=t[0].end;
		for(int i=1;i<n;i++){
			if(t[i].end>till){
				if(t[i].start>=till){
					count++;till=t[i].end;
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
