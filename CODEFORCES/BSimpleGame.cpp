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
const int M = 2e5 + 5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a;
    cin >> n >> m;
    if(n==1)return puts("1");
    if (m > (n + 1) / 2)
        cout << m - 1 << endl;

    else if (m < (n + 1) / 2)
        cout << m + 1 << endl;
    else
    {
        if (n & 1)
            cout << m - 1 << endl;
        else
            cout << m + 1 << endl;
    }
    return 0;
}