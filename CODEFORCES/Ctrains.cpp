//2020-07-19
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
const int M = 2e5 + 5;

ostream &operator<<(ostream &oov, const vector<ll> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, lcm, ma = 0, mb = 0, g;
    scanf("%lld %lld", &a, &b);
    lcm = a * b / __gcd(a, b);

    for (ll i = a; i < lcm; i += a)
        ma += min(i - (i / b) * b, a);
    if (a > b)
        ma += lcm - ((lcm - 1) / b) * b;
    if (ma > lcm - ma)
        cout << "Dasha\n";
    else if (ma < lcm - ma)
        cout << "Masha\n";
    else
        cout << "Equal\n";

    return 0;
}