//2020-08-04
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

int cnt = 0, n, m;
vector<vi> adj;
vi deg, cat, vis;
void dfs(int node, int k)
{
    vis[node] = 1;
    if (deg[node] == 1 && node != 0)
        if (k <= m)
           cnt++;
    loop(i, 0, adj[node].size())
    {
        int child = adj[node][i];
        if (!vis[child]&&k<=m)
            dfs(child, (cat[child] ? k + 1 : 0));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int a, b;
    deg = cat = vis = vi(n);
    adj = vector<vi>(n);
    loop(i, 0, n) cin >> cat[i];
    loop(i, 0, n - 1)
    {
        cin >> a >> b;
        a--, b--;
        adj[b].push_back(a);
        adj[a].push_back(b);
        deg[a]++, deg[b]++;
    }
    dfs(0, (cat[0] ? 1:0));
    cout <<cnt<<endl;
    return 0;
}