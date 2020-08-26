//2020-07-10
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M = 1e9 + 7;
__int128 s, m;
ll a, b, n, t;
ll modpowlog(ll x, ll po, ll mod)
{
    if (po == 1)
        return x % mod;
    __int128 hres = modpowlog(x, po / 2, mod);
    hres = hres * hres % mod;
    if (po & 1)
        hres = (__int128)(hres *(__int128) x % mod);
    // P(po);P(x);P(hres%mod);
    return hres;
}

// ll modpowlog(ll b, ll p, ll m) {
// 	ll r=1;
// 	while(p) {
// 		if(p&1)
// 			r=(__int128)r*b%m;
// 		b=(__int128)b*b%m;
// 		p/=2;
// 	}
// 	return r;
// }
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        m = a == b ? M : (a - b);

        s = modpowlog(a, n, m) + modpowlog(b, n, m);
        s %= m;
        //P(s);
        cout << (ll)(gcd(a - b, s) % M) << "\n";
    }

    return 0;
}