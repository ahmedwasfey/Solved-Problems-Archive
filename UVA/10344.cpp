//2020-08-01
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
int a[5], sum;
vi vis;
enum op
{
    add,
    sub,
    mul
};
bool backtrack(int idx, op o)
{
    if (idx == 5)
        return (sum == 23 ? 1 : 0);
    loop(i, 0, 5)
    {
        if (!vis[i])
        {
            if (o == add)
                sum += a[i];
            else if (o == sub)
                sum -= a[i];
            else
                sum *= a[i];

            vis[i] = 1;
            if (backtrack(idx + 1, add) ||
                backtrack(idx + 1, sub) ||
                backtrack(idx + 1, mul))
                return 1;
            if (o == add)
                sum -= a[i];
            else if (o == sub)
                sum += a[i];
            else if (sum != 0)
                sum /= a[i];
            vis[i] = 0;
         
        }
    }
    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int ss;
    while (1)
    {
        ss = 0;
        loop(i, 0, 5)
        {
            cin >> a[i];
            ss += a[i];
        }
        if (ss == 0)
            break;
        vis = vi(5, 0);
        sum = 0;
        if (backtrack(0, add))
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }

    return 0;
}