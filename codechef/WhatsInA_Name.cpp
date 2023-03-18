#include<bits/stdc++.h>	//I_<3_BITS_Pilani:)
using namespace std;
typedef long long int ll;
typedef double lf;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<lf> vlf;
typedef vector<pair<ll,ll>> vpll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<lf,lf>> vplf;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef pair<lf,lf> plf;
typedef pair<string,string> pstr; 
typedef set<ll> sll;
typedef set<int> si;
typedef set<lf> slf;
typedef set<string> sstr;
typedef map<string,int> mstri;
typedef map<string,ll> mstrll;
typedef map<string,lf> mstrlf;
typedef map<string,string> mstrstr;

#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)
#define itr2 for(int i=1;i<n;i++)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define b begin()
#define e end()
#define mp make_pair

//I HAVE NO IDEA HOW THIS CODE WORKS!!
int main(){
	ll n,c,sp1,sp2;
	cin>>n;string bogus;
	getline(cin,bogus);//to deal with the '\n' after the input n.
	itr0{
		string s;getline(cin,s);c=1;
		//cout<<"Length of this line is: "<<s.length()<<"\n";
		for(int j=0;j<s.length();j++){if(s[j]==' '){c++;if(c==2){sp1=j;}else if(c==3){sp2=j;}}}
		//cout<<"i= "<<i<<"& words= "<<c<<"\n";
			
		switch(c){
			case 1:{
				       s[0]=toupper(s[0]);
				       for(int k=1;k<s.length();k++){s[k]=tolower(s[k]);}
				       break;
			}
			case 2:{
				      s[0]=toupper(s[0]);
				      s[1]='.';
				      s[sp1+1]=toupper(s[sp1+1]);
				      //cout<<"space is at i= "<<sp1<<"\n";	
				      for(int l=sp1+2;l<s.length();l++){s[l]=tolower(s[l]);}
				      s.replace(2,sp1-1," ");
				      break;
			}
			case 3:{
				      s[0]=toupper(s[0]);
				      s[1]='.';
				      s[sp1+1]=toupper(s[sp1+1]);
				      s[sp1+2]='.';
				      s[sp2+1]=toupper(s[sp2+1]);
				      for(int m=sp2+2;m<s.length();m++){s[m]=tolower(s[m]);}
				      int oldLen=s.length();
				      //cout<<"first space is at i= "<<sp1<<"and second space is at i= "<<sp2<<"\n";
				      s.replace(2,sp1-1," ");
			      	      int newLen=s.length();
				      //cout<<s<<"\n";
					//cout<<"Old Length is: "<<oldLen<<"New length is: "<<newLen<<"\n";
		  			int diff=oldLen-newLen;
						sp1-=diff;
						sp2-=diff;			
				      s.replace(sp1+3,sp2-4," ");
				      break;
			 }
		 }
		 cout<<s<<"\n";
	}
	
	return 0;
}
				      
				
				       		




	
