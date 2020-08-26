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

int n, ver, hor, dp[105][105];
int dx[] = {0, 1};
int dy[] = {1, 0};
bool mp[105][105];
bool valid(int i, int j)
{
    if (i < ver && j < hor && mp[i][j] == true)
        return 1;
    return 0;
}
int dyn(int x, int y)
{ // P(x);P(y);P(valid(x,y));
    int &ret = dp[x][y];
    if (x == ver - 1 && y == hor - 1)
    {

        return 1;
    }
    if (ret != -1)
    {
        return ret;
    }
    ret = 0;

    if (valid(x, y))
        loop(i, 0, 2)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            ret += dyn(nx, ny);
        }
    return ret;
}
int main()
{
    cin >> n;
    while (n--)
    {

        scanf("%i %i\n", &ver, &hor);
        //P(ver);
        clr(dp, -1);
        clr(mp, 1);
        string s;
        int x, y;
        loop(i, 0, ver)
        {
            getline(cin, s);

            stringstream ss(s);
            ss >> x;
            while (ss >> y)
            {
                mp[x - 1][y - 1] = false;
            }
        }
        int ans = dyn(0, 0);
        cout << ans << "\n";if(n>0)cout<<endl;
    }

    return 0;
}