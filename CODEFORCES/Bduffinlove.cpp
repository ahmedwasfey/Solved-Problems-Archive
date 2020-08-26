//2020-07-04
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
vector<ll> factors(ll x)
{
    vector<ll> ans;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ans.push_back(i);
            ans.push_back(x / i);
        }
    }
    return ans;
}
bool solve(ll x)
{

    for (ll i = 2; i * i <= x; i++)
    {
        int sq;
        if (x % i == 0)
        {
            sq = sqrt(i);
            if (sq * sq == i)
                return 0;
            sq = sqrt(x/i);
            if(sq*sq== x/i)return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    ll n,sq;
    cin >> n;
    vector<ll> fac = factors(n);
    sort(fac.begin(), fac.end());
    P(fac);
    loopdesc(i, fac.size() - 1, 0)
    {   if(i==0)return puts("1\n");
        sq= sqrt(fac[i]);
        if(sq*sq==fac[i])continue;
        if (solve(fac[i]))
        {
            cout << fac[i] << endl;
            return 0;
        }
    }
    return 0;
}