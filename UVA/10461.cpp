#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vi> adj[2];
map<int, bool> vistd[2];

void dfs(int adx, int node)
{
    vistd[adx][node] = 1;
    loop(i, 0, adj[adx][node].size())
    {
        int u = adj[adx][node][i];
        if (!vistd[adx][u])
            dfs(adx, u);
    }
}

int main()
{
    int y, x, v, e, q,rslt,cs=0;
    while (true)
    {
        cin >> v >> e;
        if (v + e == 0)
            break;
            cs++;
        printf("Case #%i:\n",cs);
        adj[0] = vector<vi>(v);
        adj[1] = vector<vi>(v);
        int tarr[v + 5]={};
        loop(i, 0, v)
        {
            cin >> x;
            tarr[i] = x;
        }
        loop(i, 0, e)
        {
            cin >> x >> y;
            adj[0][x-1].push_back(y-1);
            adj[1][y-1].push_back(x-1);
        }
        cin >> q;
        loop(i, 0, q)
        {
            cin >> x;
            x--;
            vistd[0].clear();
            vistd[1].clear();
            dfs(0, x);
            dfs(1, x);
            rslt=0;
            loop(j,0,v){
                    if(!vistd[0][j]&&!vistd[1][j])rslt+=tarr[j];
            }
            cout <<rslt<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}