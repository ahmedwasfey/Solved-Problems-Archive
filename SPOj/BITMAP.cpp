//2020-07-08
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

ostream &operator<<(ostream &oov, const vector<ll> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}
int t, d, n, m,arr[200][200] ,vis[200][200];
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < m);
}

int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
 #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
 #endif
    char inpt;
    queue<ii> q;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        clr(arr, 0);
        clr(vis, 0);
        loop(i, 0, n)
        {
            loop(j, 0, m)
            {
                cin >> inpt;
                if (inpt == '1')
                    vis[i][j] = 1, q.push({i, j});
            }
        }
        d = 0;
        while (!q.empty())
        {
            int sz = q.size();
            while (sz--)
            {
                ii e = q.front();
                q.pop();
                arr[e.first][e.second] = d ;
                loop(i, 0, 4)
                {
                    int x = e.first + dx[i], y = e.second + dy[i];
                    if (valid(x, y))
                    {
                        if (!vis[x][y])
                            vis[x][y]=1,q.push({x, y});
                    }
                }
            }
            d++;
        }
        loop(i, 0, n)
        {
            loop(j, 0, m)
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
        //cout<<"\n";
    }

    return 0;
}