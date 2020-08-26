//2020-07-18
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

struct task
{
    ll l, r, v;
    friend istream &operator>>(istream &iv, task &a)
    {
        cin >> a.l >> a.r >> a.v;
        return iv;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k, x, y;
    cin >> n >> m >> k;
    ll arr[n + 1], ft[m + 5] = {}, fa[n + 5] = {};
    task art[m + 1];
    loop(i, 0, n) cin >> arr[i];
    loop(i, 0, m) cin >> art[i];
    loop(i, 0, k)
    {
        cin >> x >> y;
        ft[x]++;
        ft[y + 1]--;
    }
    loop(i, 1, m + 1) ft[i] += ft[i - 1];
    loop(i, 1, m + 1)
    {
        ll s = art[i - 1].l, e = art[i - 1].r + 1, val = art[i - 1].v * ft[i];
        fa[s-1] += val;
        fa[e-1] -= val;
    }
    loop(i, 1, n + 1)
        fa[i] += fa[i - 1];
    loop(i, 0, n + 1)
        arr[i]+=fa[i];
        loop(i,0,n)cout<<arr[i]<<" ";
        return 0;
}