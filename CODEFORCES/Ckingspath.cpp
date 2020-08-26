#include <bits/stdc++.h>

using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define VISITED 1
#define UNVISITED -1
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int MAX = 1e5 + 2;
map<ll, map<ll, bool>> grid;
map<ll, map<ll, bool>> vstd;
int rslt = 0;
bool tst=false;
pll p0, p1;
bool valid(ll x, ll y)
{
    return x >= 0 && y >= 0 && y < 10e9 && x < 10e9;
}
void bfs(pll s, pll d)
{
    queue<pll> q;
    q.push(s);
    vstd[s.first][s.second] = 1;
    int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};
    int sz=q.size();
    while (!q.empty())
    {   sz=q.size();
    while(sz--)
        {pll u = q.front();
        q.pop();
        if (u == d)
            {tst=true;
                return;}
        loop(z, 0, 8)
        {
            ll lx = u.first + dr[z], ly = u.second + dc[z];
            if (valid(lx,ly)&&grid[lx][ly] == 1&&vstd[lx][ly] != 1)
               { q.push(make_pair(lx, ly));
               vstd[lx][ly]=1;
               }
        }}
        rslt++;
    }
}
int main()
{
    ll r, a, b, x0, y0, x1, y1, n;
    cin >> p0.first >> p0.second >> p1.first >> p1.second >> n;
    loop(i, 0, n)
    {
        cin >> r >> a >> b;
        loop(i, a, b + 1) grid[r][i] = 1;
    }
    bfs(p0, p1);
    if(!tst) cout<<-1;
    else
    cout<< rslt;
    return 0;
}