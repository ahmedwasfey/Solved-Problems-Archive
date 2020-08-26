//2020-08-13
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
    ll n, m, k;
    cin >> n;
    if(n==1|| n==2)return puts("-1");
    if (n & 1)
    {
        m = n * n + 1;
        m /= 2;
        k = m - 1;
    }
    else
    {
        m = n * n / 4 + 1;
        k = m - 2;
    }
    cout << m << " " << k << endl;
    //cout << m * m << "  " << (n * n) + (k * k) << endl;
    return 0;
}