#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define VISITED 1
#define UNVISITED -1
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi dfs_num, rechable;
vector<vi> adj;
int x = -1;
void dfs(int v) //, int f)
{   if (v==x)return ;
    dfs_num[v] = VISITED;
    rechable[v] = VISITED;
    for (int i = 0; i < adj[v].size(); i++)
    {

        if (dfs_num[adj[v][i]] == UNVISITED )
        {
            dfs(adj[v][i]);
        }
    }
}
int main()
{
    int e, q, n;
    cin >> q;
    vector<string> rslt;
    loop(zz, 0, q)
    {
        cin >> n;
        string s = "|";
        loop(i, 0, n) s.append("N|");
        rslt = vector<string>(n, s);
        adj = vector<vi>(n);
        dfs_num = vi(n, UNVISITED);
        rechable = vi(n, UNVISITED);
        loop(i, 0, n) loop(j, 0, n)
        {
            scanf("%i", &e);
            if (e == 1)
                adj[i].push_back(j);
        }
        x = -1;
        dfs(0);
        //loop(i, 0, n) printf("veretex %i From0 :: %i \n", (i + 1), rechable[i]);
        x = 0;
        while (x < n)
        {
            dfs_num = vi(n, UNVISITED);
            dfs(0);
            loop(i, 0, n)
            {
                if (dfs_num[i] == UNVISITED && rechable[i] == VISITED)
                    rslt[x][2 * i + 1] = 'Y';
            }
            x++;
        }
        //loop(i, 0, n) rslt[0][2 * i + 1] = 'Y';
        string hh = "+";
        loop(i, 0, 2 * n - 1) hh.push_back('-');
        hh.append("+\n");
        printf("Case %i:\n",zz+1);
        loop(i, 0, n) cout <<hh<< rslt[i] << endl;cout <<hh;
    }

    return 0;
}