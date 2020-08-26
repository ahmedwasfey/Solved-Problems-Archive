//2020-07-13
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
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int ans[2] = {0, 0};
    unordered_map<char, int> mp;
    loop(i, 0, t.size())
    {
        mp[t[i]]++;
    }
    loop(i, 0, s.size())
    {
        if (mp[s[i]] > 0)
            ans[0]++, mp[s[i]]--,s[i]='.';
    }
    loop(i, 0, s.size())
    {
        if (s[i] >= 'a' && s[i] <= 'z')

            s[i] = toupper(s[i]);
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = tolower(s[i]);
        if (mp[s[i]] > 0)
            ans[1]++, mp[s[i]]--;
    }
    cout << ans[0] << " " << ans[1];
    return 0;
}