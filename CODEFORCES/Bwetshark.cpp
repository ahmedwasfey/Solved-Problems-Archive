// Auther : Ahmed Wasfey  date: 2020-05-17
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
const int M = 1e3 + 5;

ll calc(ll a)
{
    return (a * (a - 1)) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n, x, y, z, fa[M] = {}, fb[M] = {}, fc[M] = {},fd[M]={};
    cin >> n;
    loop(i, 0, n)
    {
        cin >> x >> y;
        z = 1001 - y;
        if (x > y)
        {
            fa[x - y]++;
        }
        else if (y > x)
        {
            fb[y - x]++;
        }
        else
            fa[0]++;
        if (x > z)
        {
            fc[x - z]++;
        }
        else if (z > x)
        {
            fd[z - x]++;
        }
        else
            fc[0]++;
    }
    ll ans = 0;
    loop(i, 0, 1000)
    {
        ans += calc(fa[i]);
        ans += calc(fb[i]);
        ans += calc(fc[i]);
        ans += calc(fd[i]);
    }
    cout<<(ans);
    return 0;
}