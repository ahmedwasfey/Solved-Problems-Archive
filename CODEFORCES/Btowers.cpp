//2020-07-21
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

ostream &operator<<(ostream &oov, const vii &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i].first << " " << a[i].second << "\n";
    }
    return oov;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, diff, arr[105];
    vii ans;
    cin >> n >> k;
    loop(i, 0, n)
    {
        cin >> arr[i];
    }
    loop(i, 0, k)
    {
        int *mx = max_element(arr, arr + n);
        int *mn = min_element(arr, arr + n);
        diff = *mx - *mn;
        if (diff <= 1)
            break;
        ans.push_back({mx - arr + 1, mn - arr + 1});
        (*mx)--, (*mn)++;
    }
    int *mx = max_element(arr, arr + n);
    int *mn = min_element(arr, arr + n);
    diff = *mx - *mn;
    cout << diff << " " << ans.size() << "\n"
         << ans;
    return 0;
}