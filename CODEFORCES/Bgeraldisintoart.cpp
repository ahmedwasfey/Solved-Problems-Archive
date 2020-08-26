//2020-07-25
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[3], b[3];
    string s = "YES\n";
    loop(i, 0, 3) cin >> a[i] >> b[i];
    if (a[0] >= a[1] + a[2] && b[0] >= max(b[1], b[2]))
    {
        cout << s;
        return 0;
    }
    if (a[0] >= b[1] + b[2] && b[0] >= max(a[1], a[2]))
    {
        cout << s;
        return 0;
    }

    if (a[0] >= b[1] + a[2] && b[0] >= max(a[1], b[2]))
    {
        cout << s;
        return 0;
    }
    if (a[0] >= a[1] + b[2] && b[0] >= max(b[1], a[2]))
    {
        cout << s;
        return 0;
    }

    if (b[0] >= a[1] + a[2] && a[0] >= max(b[1], b[2]))
    {
        cout << s;
        return 0;
    }
    if (b[0] >= b[1] + b[2] && a[0] >= max(a[1], a[2]))
    {
        cout << s;
        return 0;
    }

    if (b[0] >= b[1] + a[2] && a[0] >= max(a[1], b[2]))
    {
        cout << s;
        return 0;
    }
    if (b[0] >= a[1] + b[2] && a[0] >= max(b[1], a[2]))
    {
        cout << s;
        return 0;
    }
    cout<<"NO\n";
    return 0;
}