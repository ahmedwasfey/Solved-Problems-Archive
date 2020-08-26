//2020-07-25
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

int main()
{

#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t, s, d, x, y;
    cin >> t;
    while (t--)
    {
        cin >> s >> d;
        x = (s + d) / 2;
        y = s - x;
        if (((s+d)&1)||x < 0 || x < y || y < 0)
            cout << "impossible\n";

        else
        {
            printf("%lli %lli\n", x, y);
        }
    }

    return 0;
}