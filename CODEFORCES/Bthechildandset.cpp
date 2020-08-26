//2020-07-12
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


ostream &operator<<(ostream &oov,const vi &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}


int p2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536};

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, l;
    unordered_map<int, vi> mp;
    cin >> s >> l;
    vii arr;
    for (int i = 1; i <= l; i++)
    {
        loop(j, 0, 17)
        {
            if (i & p2[j])
            {
                mp[p2[j]].push_back(i);
                break;
            }
        }
    }
    vi ans;
    for (int i = 16; i >= 0; i--)
    {
        while (s >= p2[i] && mp[p2[i]].size())
        {
            s -= p2[i];
            ans.push_back(mp[p2[i]].back());
            mp[p2[i]].pop_back();
        }
    }
    if(s)return puts("-1\n");
    cout<<ans.size()<<"\n"<<ans;
    return 0;
}