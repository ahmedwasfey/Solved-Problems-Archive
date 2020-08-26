//2020-07-21
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, ix;
    vi x, y;
    cin >> n;
    loop(i, 0, n)
    {
        cin >> k;
        x.push_back(k);
        cin >> k;
        y.push_back(k);
    }
    string s1(n, '0'), s2(n, '0');
    loop(i, 0, n / 2) s1[i] = '1', s2[i] = '1';
    if (n & 1)
    {
        ix = n / 2 ;
        if (x[ix] <= y[ix])
            s1[ix] = '1';
        else
            s2[ix] = '1';
    }
    int i = 0, i1 = 0, i2 = 0;
    while (i < n)
    {
        if (x[i1] < y[i2])
        {
            s1[i1] = '1';
            i1++;
        }
        else
        {
            s2[i2] = '1';
            i2++;
        }
        i++;
    }
    cout<<s1<<"\n"<<s2<<"\n";

    return 0;
}