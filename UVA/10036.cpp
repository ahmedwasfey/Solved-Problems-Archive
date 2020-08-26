//2020-08-25
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
int t, x, n, k;
bool vis[10001][100];
vi v;
void solve(int idx, int sum)
{
    bool &ans = vis[idx][sum];
    if (idx == n)
        return;
    int add = ((sum + v[idx]) % k + k) % k;
    int sub = ((sum - v[idx]) % k + k) % k;
    if (!vis[idx][add])
        vis[idx][add] = 1,
        solve(idx + 1, add);
    if (!vis[idx][sub])
        vis[idx][sub] = 1,
        solve(idx + 1, sub);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> t;
    while (t--)
    {
        v.clear();
        cin >> n >> k;
        loop(i, 0, n)
        {
            cin >> x;
            //x = abs(x);
            v.push_back(x);
        }
        clr(vis , 0);
        vis[0][((v[0] % k) + k) % k] = true;//  WHY WITHOUT THIS YOU GET WRONG ANSWER??????!!!!!!!!!!!!
        solve(1, ((v[0] % k) + k) % k);
        if (vis[n - 1][0])
            cout << "Divisible\n";
        else
            cout << "Not divisible\n";
    }

    return 0;
}