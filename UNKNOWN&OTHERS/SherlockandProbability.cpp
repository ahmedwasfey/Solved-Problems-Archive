//2020-07-28
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

ll npr(ll n, ll r)
{
    ll ans = 1;
    loopdesc(i, n, n - r + 1) ans *= i;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif
    int t, n, k, cnt;
    string s;
    ll bst, mkm, g;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> s;
        cnt = 0, bst = 0, mkm = 0;
        mkm = s.size();
        mkm += npr(mkm, 2);
        loop(i, 0, k + 1) if (s[i] == '1') cnt++;
        bst = cnt + npr(cnt, 2);
        int idx = 0;
        loop(i, k + 1, n)
        {
            if (s[idx] == '1')
                cnt--;
            if (s[i] == '1')
            {
                bst += cnt*2 + 1;
                cnt++;
            }
            idx++;
        }

        g = __gcd(bst, mkm);
        bst /= g, mkm /= g;
        printf("%lli/%lli\n", bst, mkm);
    }

    return 0;
}