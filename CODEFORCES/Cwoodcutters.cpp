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
const int MAX = 10e5 + 3;
pll arr[MAX];
ll dp[MAX][4], n;
ll solve(int i, int prevtree)
{
    ll &ret = dp[i][prevtree];

    if (i == 0)
        return ret = (1 + solve(i + 1, 1));
    if (i == n-1)
        return 1;
    if (ret != -1)
        return ret;
   ret = 0;
    if (prevtree == 1 || prevtree == 2)
    {
        if (arr[i].first - arr[i - 1].first > arr[i].second)
            ret = max(ret, 1 + solve(i + 1, 1));
    }
    else
    {
        if (arr[i].first - arr[i - 1].first - arr[i - 1].second > arr[i].second)
            ret = max(ret, 1 + solve(i + 1, 1));
    }
    if (arr[i + 1].first - arr[i].first > arr[i].second)
        ret = max(ret, 1 + solve(i + 1, 3));

    return ret = max(ret, solve(i + 1, 2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    loop(i, 0, n)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    clr(dp, -1);
    printf("%lli\n", solve(0, 0));
    return 0;
}