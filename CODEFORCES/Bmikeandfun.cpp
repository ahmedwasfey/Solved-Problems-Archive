//2020-07-14
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
    int n, m, q, cur = 0;
   // ii ans = {-1, 0};
    cin >> n >> m >> q;
    bool arr[n + 1][m + 1];
    int ans[n] = {};
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                cur++;
            else
                cur = 0;
            ans[i] = max(ans[i], cur);
        }

        cur = 0;
    }
    // P(ans.first), P(ans.second);
    loop(i, 0, q)
    {
        int x, y;
        cin >> x >> y;
        arr[x - 1][y - 1] = 1-arr[x - 1][y - 1];
        ans[x-1]=0;
        loop(i, 0, m)
        {
            if (arr[x - 1][i] == 1)
                cur++;
            else
                cur = 0;
            ans[x-1]=max(ans[x-1],cur);
        }
        cout << *max_element(ans,ans+n) << endl;
        cur = 0;
    }
    return 0;
}