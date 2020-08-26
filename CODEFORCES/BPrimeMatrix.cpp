//2020-08-19
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
const int M = 1e5 + 50;
bool is_prime(ll x)
{   if(x==1)return 0;
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    int n, m, x, vcl[502], vrow[502], l;
    loop(i, 2, M) if (is_prime(i))
        s.insert(i);
    cin >> n >> m;
    clr(vcl, 0);
    clr(vrow, 0);
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            cin >> x;
            if (!is_prime(x))
            {

                l = *(s.upper_bound(x));
                vcl[i] += l-x;
                vrow[j] += l-x;
            }
        }
    }
    cout << min(*min_element(vcl, vcl + n), *min_element(vrow, vrow + m)) << endl;
    return 0;
}