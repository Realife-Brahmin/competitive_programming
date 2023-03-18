#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)
//#include<iomanip> (included in first heading, used for setprecision() )
using namespace std;
typedef long long int ll;
typedef long double llf;
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

#define priority_queue pq
#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

#define IOS ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define to top()
#define po pop()
#define si size()
#define mp make_pair
#define fi first
#define se second

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

void checkIn(ll King[],int c,llf x,llf r){
	for(int i=x-r;i<=x+r;i++){
		if(i<0){continue;}
		King[i]=c;
	}
}

llf welcome(llf oldX,llf oldY,llf nuX,llf r){
	return oldY+sqrtl((4*r*r)-((oldX-nuX)*(oldX-nuX)));
}

				
int main(){IOS
	ll n;llf r;cin>>n>>r;
	ll King[2001];//circle number for every +ve x coordinate
	itr(i,0,2001){King[i]=-1;}
	llf x[n],y[n];//x and y coordinate of centre for every circle
	itr0{y[i]=-1;}
	cin>>x[0];y[0]=r;
	checkIn(King,0,x[0],r);
//	itr(i,0,20){cout<<King[i]<<" ";}cout<<"\n";
	itr(i,1,n){
		cin>>x[i];
		llf max=-1,maxX=0;ll indx;
		for(int j=x[i]-r;j<=x[i]+r;j++){
			if(j<0){continue;}
			else{
				if(King[j]!=-1){
					llf XX=fabsl(x[King[j]]-x[i]);
					if(y[King[j]]>=max&&XX>=maxX){
						maxX=XX;
						max=y[King[j]];
						indx=King[j];//gives a (circle) number
						if(i==86){cout<<"Parent=="<<x[indx]<<"And his y=="<<max<<"\n";}
					}
				}
			}
		}
		if(max==-1){
			y[i]=r;
			checkIn(King,i,x[i],r);
		//	itr(i,0,20){cout<<King[i]<<" ";}cout<<"\n";
		}
		else{
			llf X=x[indx];
			llf Y=y[indx];
			y[i]=welcome(X,Y,x[i],r);
			checkIn(King,i,x[i],r);
		//	itr(i,0,20){cout<<King[i]<<" ";}cout<<"\n";
		}
	}
	cout<<"QUESTIONS\n";
	itr0{cout<<i<<" "<<x[i]<<"\n";}
	cout<<"ANSWERS\n";
	itr0{cout<<i<<" "<<setprecision(10)<<y[i]<<"\n";}
	cout<<"\n";
	return 0;
}



