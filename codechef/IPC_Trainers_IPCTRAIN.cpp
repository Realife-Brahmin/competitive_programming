#include<bits/stdc++.h>	//I_<3_BITS_Pilani__&&__DC++:)

//All credits to Vijju123, looking at whose code has helped me solve this problem:)

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

#define pq priority_queue
#define itr(i,lo,size) for(int i=lo;i<size;i++)
#define itrR(i,hi,lo) for(int i=hi;i>=lo;i--)
#define itr0 for(int i=0;i<n;i++)
#define itr1 for(int i=1;i<=n;i++)

#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define be begin()
#define en end()
#define mp make_pair
#define fi first
#define se second

ll gcd(ll a,ll b){if(a%b==0){return b;}else{return gcd(b,a%b);}}

struct train{
	ll day;
	ll lect;
	ll sad;
};

int comp(train a,train b){
	return a.sad<b.sad;
}

int compday(train a,train b){
	return a.day<b.day;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	//A bit strange way to declare (used when the normal way doean't work;
	//found on SO
	ll t;cin>>t;
	itr(T,0,t){
		pq<train,vector<train>,function<int(train,train)>> P(comp);
		ll n,d;
		cin>>n>>d;
		train t[n];
		ll ans=0;
		itr0{
			cin>>t[i].day>>t[i].lect>>t[i].sad;
			ans+=t[i].lect*t[i].sad;
		}

		sort(t,t+n,compday);
		//arrange trainers in increasing order of the day they arrive
	//	itr0{cout<<t[i].day<<" "<<t[i].sad<<"\n";}
	//	cout<<ans<<" Originally\n";
		int i=0;
		itr(Day,1,d+1){
			while(i<n&&t[i].day==Day){//Seeing the nth day,
					P.push(t[i]);
					i++;
			}
					//We push (into our inventory) all the eligible trainers for the nth day
					//(Note that the list (in later iterations of 'Day') will also include any trainers
					//which have lect>0 && day<=Day
			//		cout<<"We push "<<t[i].sad<<"\n";			

			if(P.size()==0){
				continue;
			}

			train a= P.top();//Select the best option
			ans-=a.sad;
			//cout<<ans<<" Now\n";
			P.pop();//By default, we pop out the used option
			a.lect-=1;
			if(a.lect>0){P.push(a);}//And use(push) it again if still available
		}
		cout<<ans<<"\n";
	}
	return 0;
}	
