//2020-07-27
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x << " = { " << x << " }\n" \
                  << endl;
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M = 2e5 + 5;

template <typename TT>
ostream &operator<<(ostream &oov, const pair<TT, TT> &a)
{
    oov << a.first << " " << a.second << " ";
    return oov;
}
ll n, a, b, z, ans;
ll calc(ll x)
{
    return (((((a *x)%n)*x)%n) + b) % n;
}
ll floyed()
{
    ll tort, hare;
    tort = calc(0);
    hare = calc(tort);
    while (tort != hare)
    {
        tort = calc(tort);
        hare = calc(calc(hare));
        if(tort<0)cout<<"tort\n";
        if(hare<0)cout<<"hare\n";
    }
    return tort;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
   // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll st;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cin >> a >> b;
        ans = 1;
        st = (floyed());
        z=st;
        bool f0 = 0;
        while (1)
        {
            z=calc(z);
            if (z == st)
                break;
            ans++;
            //P(z);
        }
        cout << n - ans << endl;
    }

    return 0;
}