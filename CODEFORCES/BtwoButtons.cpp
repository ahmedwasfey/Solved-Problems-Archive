#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << x << endl;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, idx = 0, sz, p0, p1;
    cin >> n >> m;
    queue<ii> q;
    map<int , bool > vst;
    ii u;
    q.push(MP(n, 0));

    while (!q.empty())
    {
        sz = q.size();
        idx++;
        while (sz--)
        {
            u = q.front();
            q.pop();
            if (u.first < 0)
                continue;
            if (u.first == m)
            {
                cout << u.second << endl;
                return 0;
            }
            if (u.first < m)
            {
                p0 = u.first * 2;
               if(!vst[p0])  q.push(MP(p0, idx));
                vst[p0]=1;
            }
          p1 = u.first - 1;
       if(!vst[p1])  q.push(MP(p1, idx));
       vst[p1]=1;
         
        }
    }

    return 0;
}