//2020-07-27
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    double n, a, dx;
    while (cin >> n)
    {   if(n==(int)0)break;
        a = (int)cbrt(n);
        dx = (n- a*a*a)/(3*a*a);
        printf("%.4f\n", a+dx);
    }

    return 0;
}