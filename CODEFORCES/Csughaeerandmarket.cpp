//2020-07-03
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M = 1e5 + 5;
ll arr2[M], arr[M] = {0};
int n;
ll func(ll index)
{
    ll Result = 0;
    for (long long i = 1; i <= n; i++)
    {
        arr2[i] = (arr[i] + i * index);
    }
    sort(arr2, arr2 + n + 1);
    for (long long i = 1; i <= index; i++)
        Result += arr2[i];
    return Result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int k, x;

    cin >> n >> k;

    loop(i, 1, n + 1)
    {
        cin >> arr[i];
        // arr[i] += arr[i - 1];
    }
    int f = 0, l = n, m;
    ll zz, ans0 = 0, ans1 = 0;
    while (f <= l)
    {
        m = (l + f ) / 2;
        zz = func(m);
        if (zz <= k)
        {
            ans0 = m;
            ans1 = zz;
            f = m+1;
        }
        if (zz > k)
            l = m - 1;
    }
    cout << ans0 << " " << ans1 << endl;
    return 0;
}