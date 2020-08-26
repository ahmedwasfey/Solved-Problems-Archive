// Auther : Ahmed Wasfey  date: 2020-05-12
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
typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
const int MAX = 1e2 + 5;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n, m, c, r, arr[MAX][MAX], ans[MAX][MAX];
    cin >> n >> m;
    loop(i, 0, n) loop(j, 0, m) cin >> arr[i][j];

    loop(i, 0, n)

        loop(j, 0, m)
    {
        c = 1, r = 1;
        loop(z, 0, n) c &= arr[z][j];
        loop(z, 0, m) r &= arr[i][z];
        ans[i][j] = (c & r);
    }
    loop(i, 0, n) loop(j, 0, m)
    {
        c = 0, r = 0;
        loop(z, 0, n) c |= ans[z][j];
        loop(z, 0, m) r |= ans[i][z];
        if (arr[i][j] != (c | r) )
            return puts("NO");
    }
    cout <<"YES\n";
    loop(i, 0, n)
    {
        loop(j, 0, m) cout << ans[i][j] << " ";
        cout << "\n";
    }

    return 0;
}