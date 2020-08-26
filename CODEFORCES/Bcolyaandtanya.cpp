// Auther : Ahmed Wasfey  date: 2020-04-21
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const ll mod = 10e9 + 7;
ll modpowlin(ll x, ll y, ll mod)
{
    ll res = 1;
    loop(i, 0, y)
    {
        res = x * res % mod;
       // P(res);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x ; const ll mod=1e9+7;

    cin >> x;

    cout << (modpowlin(27, x, mod) - modpowlin(7, x,mod) +mod) % mod << endl;
    return 0;
}