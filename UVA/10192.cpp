//2020-08-20
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
string s1, s2;
int vis[102][102];
int saved = 0;
int solve(int i, int j)
{
    if (vis[i][j] != -1)
    {
        saved++;
        return vis[i][j];
    }
    if (i == s1.size() || j == s2.size())
        return 0;
    if (s1[i] == s2[j])
        return vis[i][j] = 1 + solve(i + 1, j + 1);
    int c1 = solve(i, j + 1);
    int c2 = solve(i + 1, j);
    return vis[i][j] = max(c1, c2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int n = 0;
    while (1)
    {
        getline(cin, s1);
        if (s1 == "#")
        {
            //printf("# of saved TREES(each tree is brached to many other branches): %i \n", saved);
            break;
        }
        n++;
        clr(vis, -1);
        getline(cin, s2);
        printf("Case #%i: you can visit at most %i cities.\n", n, solve(0, 0));
    }

    return 0;
}