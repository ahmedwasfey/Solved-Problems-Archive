//2020-07-04
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M = 2e5 + 5;
ll calc(ll x)
{
    return x * (x - 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    unordered_map<int, int> xmap, ymap;
    map<pair<int, int>, int> samemap;
    int n, x, y;
    ll ans = 0;
    set<ii> s;
    cin >> n;
    loop(i, 0, n)
    {
        cin >> x >> y;
        xmap[x]++;
        ymap[y]++;
        samemap[{x,y}]++;
    }

    for (auto i : xmap)
        ans += calc(i.second);
    //cout<<"=---\n";
    for (auto i : ymap)
        ans += calc(i.second);
    for (auto i : samemap)ans-=calc(i.second);
    cout<<(ans);
    return 0;
}