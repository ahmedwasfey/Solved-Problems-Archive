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
int n, m, x, y, cp[1005] = {}, dp[1002][1002][3];
int solve(int i, int z, int prev)
{
    if (i == m){
        if(z<x|| z>y) return 1e9;
        return 0;}
    int &ret = dp[i][z][prev];
    if (ret != -1)
        return ret;
    ret = 0;
    if (prev == 0)
    {
        int p00 = cp[i] + solve(i + 1, z+1, 1);
        int p01 = n - cp[i] + solve(i + 1, z+1 , 2);
        return min(p00,p01);
    }
    if (prev != 1)
    {
        if (z < x)
        {
            ret = n - cp[i];
            return ret += solve(i + 1, z + 1, 2);
        }
        else if (z <y)
        {
            int p1 = n - cp[i];
            int p2 = cp[i];
            p1 += solve(i + 1, z + 1, 2);
            p2 += solve(i + 1, 1, 1);
            return ret = min(p1, p2);
        }
        else
        {
            ret += cp[i];
            return ret += solve(i + 1, 1, 1);
        }
    }
    if (prev != 2)
    {
        if (z < x)
        {
            ret = cp[i];
            return ret += solve(i + 1, z + 1, 1);
        }
        else if (z < y)
        {
            int p1 = cp[i];
            int p2 = n - cp[i];
            p1 += solve(i + 1, z + 1, 1);
            p2 += solve(i + 1, 1, 2);
            return ret = min(p1, p2);
        }
        else
        {
            ret = n - cp[i];
            return ret += solve(i + 1, 1, 2);
        }
    }
    return ret;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> n >> m >> x >> y;
    loop(i, 0, n)
    {
        cin >> s;
        loop(j, 0, m)
        {
            if (s[j] == '.')
                cp[j]++;
        }
    }
    clr(dp, -1);
    cout << solve(0, 0, 0) << endl;
    return 0;
}