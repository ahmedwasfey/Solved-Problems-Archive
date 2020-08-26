//2020-08-11 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M=2e5+5;
ll modpowlog(ll b, ll p, ll m) {
    ll r=1;
    while (p) {
        if (p&1)
            r=r*b%m;
        b=b*b%m;
        p/=2;
    }
    return r;
}
int main() {
    ll n, m;
    cin>>n>>m;
    cout<< ((modpowlog(3, n, m)+m-1)%m );
    return 0;
}