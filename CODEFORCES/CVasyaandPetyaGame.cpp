//2020-08-03
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
template <typename TT>
ostream &operator<<(ostream &oov, const vector<TT> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i];
        if (i != a.size() - 1)
            oov << " ";
    }
    return oov;
}
bool is_prime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vi ans;
    cin >> n;
    loop(i, 2, n + 1)
    {
        int x = i;
        if (is_prime(i))
        {
            while (x <= n)
            {
                ans.push_back(x);
                x *= i;
            }
        }
    }
    cout<<ans.size()<<"\n"<<(ans);
    return 0;
}