#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<double,double> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<vl> mat;


#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const int MOD = 1000000007;
const double PI = 4*atan(1);
const ll INF = 1e18;
const int MX = 100001;

int N, t;
ll ans = 1;
map<int,int> M;
vi res;

void process(int x) {
    F0R(i,x) ans = ans*(t-i)%MOD;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    F0R(i,N) {
        int a; cin >> a;
        M[a] ++;
    }
    for (auto a: M) res.pb(a.s);
    sort(all(res)); t = res.back(); res.pop_back();
    for (int x: res) process(x);
    cout << ans;
}

// read the question correctly (is y a vowel?)
// look out for SPECIAL CASES (n=1?) and overflow (ll vs int?)
