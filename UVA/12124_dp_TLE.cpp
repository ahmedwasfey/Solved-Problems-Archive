//2020-08-02
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)
#define umap unordered_map;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vpii;
typedef vector<int> vi;
typedef vector<pll> vpll;
const int M = 2e5 + 5;

unordered_map<string, vpll> m;
ll best_min = -1 , b, n;
void solve(ll total, unordered_map<string, vpll>::iterator it, ll cur_min)
{   if(cur_min<best_min)return;
    if (it == m.end())
    {
        best_min = max(cur_min, best_min);
        int tsting = best_min;
        return;
    }
    vpll d = (*it).second;
    string tst = (*it).first ;
    loop(i, 0, d.size())
    {
        int price = total + d[i].first;
        if (price <= b)
            solve(price, next(it, 1), min(d[i].second, cur_min));
    }
}
void CLEAR()
{
    m.clear();
    best_min = -1;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    string typ, nm;
    int pric, qual;
    while (t--)
    {
        CLEAR();
        cin >> n >> b;
        loop(i, 0, n)
        {
            cin >> typ >> nm >> pric >> qual;
            m[typ].push_back({pric, qual});
        }
        solve(0, m.begin(), 1e13);
        P(best_min);
    }

    return 0;
}