// Auther : Ahmed Wasfey  date: 2020-05-13
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
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
typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
const int MAX = 55;

int n, m, sx, sy, cnt = 0, vis[MAX][MAX], dx[] = {0, 1, -1, 0}, dy[] = {1, 0, 0, -1};
string arr[MAX];
bool valid(int x, int y) { return (x >= 0 && y >= 0 && x < n && y < m); }
bool dfs(int n, int m, char prev, int prevx, int prevy)
{
    vis[n][m] = 1;

    loop(i, 0, 4)
    {
        int x0 = n + dx[i], y0 = m + dy[i];

        if (!valid(x0, y0))
            continue;
        if ((x0 == prevx && y0 == prevy) || arr[x0][y0] != prev)
            continue;
        if (vis[x0][y0])
            return 1;
        if (dfs(x0, y0, prev, n, m))
            return 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    cin >> n >> m;
    loop(i, 0, n) cin >> arr[i];
    loop(i, 0, n) loop(j, 0, m)
    {
        if(!vis[i][j])
        if (dfs(i, j, arr[i][j], -1, -1))
            return puts("Yes");
    }
    cout << "No\n";
    return 0;
}