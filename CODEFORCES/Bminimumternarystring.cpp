//2020-05-28
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

string s, r;
int func()
{
    int idx = -1;
    loop(i, 0, s.size()) 
    if (s[i] != '1') r.pb(s[i]);
    loop(i, 0, r.size())
     if (r[i] == '2') {idx = i;break;}
    return idx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    cin >> s;
    int z = func();
    string x(s.size() - r.size(), '1');
    if (z == -1)
        cout << r << x << endl;
    else
    {
        r.insert(z, x);
        cout << r << endl;
    }
    return 0;
}