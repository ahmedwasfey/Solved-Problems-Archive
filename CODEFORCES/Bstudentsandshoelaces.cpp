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
void wasfyvclr(vi &s)
{
    vi d;
    swap(s, d);
}
int main()
{
    int x, y, v, e, cnt = 0;
    cin >> v >> e;
    vector<vi> adj(v);
    map<int ,bool> vstd; 
    loop(i, 0, e)
    {
        scanf("%i %i", &x, &y);
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    bool hcntrl = true, fnd;
    while (hcntrl)
    {
        fnd = false;
        hcntrl = false;
        vstd.clear();
        loop(i, 0, v)
        {
            if (!vstd[i]&&adj[i].size() == 1)
            {
                int u = adj[i][0];
                vstd[u]=1;
                //P(u);
                wasfyvclr(adj[i]);
                loop(j, 0, adj[u].size())
                {
                    if (adj[u][j] == i)
                    {
                        adj[u].erase(adj[u].begin() + j);
                        break;
                    }
                }
               // P(adj[i].size());
                //P(i);
                fnd = true;
                hcntrl = true;
            }
        }
        if(fnd)cnt++;
    }
    cout <<cnt <<endl;
    return 0;
}