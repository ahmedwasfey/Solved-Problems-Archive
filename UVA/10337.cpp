#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopd(v, st, en) for (int v = st; v > en; v--)
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
int road[10][1005], dp[10][1005];
int x;
int solve(int x1, int y1)
{   if (x1 < 0 || x1 > 9 || y1 > x)
        return 1e9;
    if (y1 == x)
    {
        if (x1 == 0)
            return 0;
        else
            return 1e9;
    }

    int &ret = dp[x1][y1];
    //P(ret);
    if (ret != -1)
        return ret;
    int path1 = (60 - road[x1][y1] + solve(x1 + 1, y1 + 1));
    int path2 = (30 - road[x1][y1] + solve(x1, y1 + 1));
    int path3 = (20 - road[x1][y1] + solve(x1 - 1, y1 + 1));
    return ret = min(path2, min(path1, path3));
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> x;
        x = x / 100;
        int z;
        //clr(road, 0);
        clr(dp, -1);
        loopd(j, 9, -1)
            loop(i, 0, x)
        {
            cin >> z;
            road[j][i] = z;
        }
        cout << (solve(0,0)) << "\n\n";
    }
    return 0;
}