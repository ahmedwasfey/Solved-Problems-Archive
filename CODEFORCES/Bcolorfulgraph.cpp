// Auther : Ahmed Wasfey  date: 2020-03-20
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << x << endl;
#define cp(a, b) ((conj(a) * (b)).imag())
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef complex<double> point;
vector<vii> adj;
int vstd[109], vstdcol[109];
int dfs(int src, int des, int prevcol)
{
    vstd[src] = 1;
    if (src == des)
        return 1;
    ii child;
    int cnt = 0;
    loop(i, 0, adj[src].size())
    {
        child = adj[src][i];
        // int x = child.first, y = child.second;
        if (prevcol != -1)
        {
            if (vstd[child.first])
                continue;
            if (prevcol == child.second)
            {

                if (dfs(child.first, des, child.second) == 1)
                    return 1;
            }
        }
        else
        {
            clr(vstd, 0);
            vstd[src] = 1;
            if (!vstdcol[child.second])
            {
               if(dfs(child.first, des, child.second))vstdcol[child.second]=1,
                cnt ++ ;
            }
        }
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, n, m;
    cin >> n >> m;
    adj = vector<vii>(n + 5);
    loop(i, 0, m)
    {
        cin >> a >> b >> c;
        adj[a].push_back(MP(b, c));
        adj[b].push_back(MP(a, c));
    }
    cin >> a;
    loop(i, 0, a)
    {

        cin >> b >> c;
        clr(vstdcol, 0);
        cout << dfs(b, c, -1) << endl;
    }
    return 0;
}