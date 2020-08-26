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
int n, arr[1005], dp[1005][2];
ll sca = 0, scm = 0;
int solve(int i, int prev)
{
    if (i >= n)
        return 0;
    int &ret = dp[i][prev];
    if (ret != 0)
        return ret;
    int p1 = arr[i] + solve(i + 1, 1 ^ prev);
    int p2 = arr[i] + arr[i + 1] + solve(i + 2, 1 ^ prev);
    ret = max(p1, p2);
    if (prev == 0)
        return scm = ret;
    else
        return sca = ret;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    loop(i, 0, n) cin >> arr[i];
    sort(arr, arr + n);
    reverse(arr,arr+n);
   // clr(dp, INT_MAX);
    int ans = solve(0, 0);
    //P(sca);
    //P(scm);
    // sca is the score of mr AAA
    // scm is the score of mr MMM
    return 0;
}