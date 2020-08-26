//2020-06-01
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
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
    //freopen("input.txt", "r", stdin);
    int n, sa = 0, sg = 0, x, y;
    string s;
    cin >> n;
    loop(i, 0, n)
    {
        cin >> x >> y;
        if (sa + x - sg <= 500)
        {
            sa += x;
            s.pb('A');
        }
        else
        {
            sg += y;
            s.pb('G');
        }
    }
    cout <<s<<endl;
    return 0;
}