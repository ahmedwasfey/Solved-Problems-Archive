// Auther : Ahmed Wasfey  date: 2020-04-25
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
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
vector<vii> adj;
vi dfs()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int t, x, n;
    vi trank;
    cin >> t;
    while (t--)
    {
        cin >> n;
        trank = vi(n + 1, 0);
        loop(i, 0, n)
        {
            cin >> x;
        }
    }

    return 0;
}