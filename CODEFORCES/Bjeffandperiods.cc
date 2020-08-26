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
const int MX = 10e5 + 5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, varr[MX] = {};
    cin >> n;
    int x;
    map<int, vi> mp;
    vector<ii> rslt;
    loop(i, 0, n)
    {
        cin >> x;
        mp[x].push_back(i + 1);
        varr[x] = 1;
    }
    loop(i, 0, 10e5)
    {
        if (varr[i])
        {
            if (mp[i].size() == 1)
                rslt.push_back(MP(i, 0));
            else
            {
                int per = mp[i][1] - mp[i][0], flg = 1;
                loop(j, 1, mp[i].size())
                {
                    if (mp[i][j] - mp[i][j - 1] != per)
                    {
                        flg = 0;
                        break;
                    }
                }
                 if (flg)
                        rslt.push_back(MP(i, per));
            }
        }
    }
    cout<<rslt.size()<<endl;
    loop(i,0,rslt.size())printf("%i %i\n", rslt[i].first,rslt[i].second);
    return 0;
}