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
map<int, map<int, bool>> visited;

bool valid(int x, int y)
{
    return x >= 0 && y >= 0 && y < 8 && x < 8;
}
int rslt = 0;
void bfs(ii s, ii d)
{
    queue<ii> q;
    q.push(s);
    visited[s.first][s.second] = 1;
    int dr[] = {1, 1, 2, 2, -1, -1, -2, -2};
    int dc[] = {2, -2, -1, 1, 2, -2, 1, -1};
    int sz = q.size();
    while (true)
    {
        sz = q.size();
        while (sz--)
        {
            ii u = q.front();
            q.pop();
            if (u == d)
            {
                //                tst = true;
                return;
            }
            loop(z, 0, 8)
            {
                int lx = u.first + dr[z], ly = u.second + dc[z];
                if (valid(lx, ly) && visited[lx][ly] != 1)
                {
                    q.push(make_pair(lx, ly));
                    visited[lx][ly] = 1;
                }
            }
        }
        rslt++;
    }
}
int main()
{
    char c1, c2, c3, c4;
    ii p0, p1;
    while (cin >> c1 >> c2 >> c3 >> c4)
    {
        visited.clear();
        p0.first = c2 - '1';
        p0.second = c1 - 'a';
        p1.first = c4 - '1';
        p1.second = c3 - 'a';
        rslt = 0;
        bfs(p0, p1);
        printf("To get from %c%c to %c%c takes %i knight moves.\n", c1, c2, c3, c4, rslt);
    }

    return 0;
}