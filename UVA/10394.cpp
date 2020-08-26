//2020-07-05
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
ll numOfSteps =0;

ostream &operator<<(ostream &oov, const vector<pll> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i].first << "," << a[i].second << "\n";
    }
    return oov;
}

bool is_prime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        numOfSteps++;
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int x = 10000, i = 3;
    vector<pll> rslt;
    rslt.push_back({2, 3});
    bool prev = 0, current = 0;
    while (rslt.size() < 100000)
    {
        current = is_prime(i);
        if (prev && current)
            rslt.push_back({i - 2, i});
        i += 2;
        prev = current;
    }
    P(numOfSteps);

    return 0;
}