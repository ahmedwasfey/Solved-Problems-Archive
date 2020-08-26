//2020-07-07
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
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
int f, chld1, chld2, c, r, x, y;
string s;

bool valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < r && j < c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> adj;
    while (1)
    {
        cin >> r >> c;
        if (c + r == 0)
            break;
        adj.clear();
        loop(i, 0, r)
        {
            cin >> s;
            f = s.find('*');
            if (f != string::npos)
                x = i, y = f;
            adj.push_back(s);
        }
        P(x), P(y);
        queue<ii> q;
        q.push({x, y});
        while (!q.empty())
        {
            ii e = q.front();
            q.pop();
            loop(i, 0, 4)
            {
                chld1 = e.first + dx[i];
                chld2 = e.second + dy[i];
                if (valid(chld1, chld2))
                {
                    if(adj[chld1][chld2]!=6);
                }
            }
        }
    }

    return 0;
}