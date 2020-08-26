//2020-08-01
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
template <typename TT>
ostream &operator<<(ostream &oov, const vector<TT> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] + 1;
        if (i != a.size() - 1)
            oov << " ";
    }

    return oov;
}

int t, a, b, output = 0;
vi ans, col, right_diag, left_diag;
vector<vi> final_output;
void backtrack(int r)
{
    if (r == 8)
    {
        final_output.push_back(ans);
        return;
    }
    if (r == a)
        backtrack(r + 1);
    else
        loop(i, 0, 8)
        {
            if (!col[i] && !right_diag[i + r] && !left_diag[8 + (r - i)])
            {
                col[i] = right_diag[r + i] = left_diag[8 + (r - i)] = 1;
                ans[i] = r;
                backtrack(r + 1);
                right_diag[r + i] = left_diag[8 + (r - i)] = col[i] = 0;
            }
        }
}
void CLEAR()
{
    col = vi(8, 0), ans = vi(8, -1), left_diag = vi(17, 0), right_diag = vi(17, 0), output = 0, final_output.clear();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> t;

    while (t--)
    {
        CLEAR();
        cin >> a >> b;
        a--, b--;
        ans[b] = a, col[b] = 1, right_diag[a + b] = 1, left_diag[8 + (a - b)] = 1;
        cout << "SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n";
        backtrack(0);
        sort(final_output.begin(), final_output.end());
        loop(i, 0, final_output.size())
        {
            if (i < 9)
                cout << " ";
            cout << i + 1 << "      " << final_output[i] << "\n";
        }
        if (t != 0)
            cout << "\n";
    }
    return 0;
}