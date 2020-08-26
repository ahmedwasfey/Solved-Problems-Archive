//2020-06-01
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n, idx;
    cin >> s >> n;
    if (s.size() < 2)
    {
        cout << s << endl;
        return 0;
    }
    char m = '0' - 1;
    loop(i, 0, s.size())
    
        if (s[i] > m)
        {
            idx = i;
            m = s[i];
        }
        bool slvd=0;
    while (n>0&&!slvd)
    {
        while (n--&&idx>0)
        {
            swap(s[idx],s[idx-1]);
            idx--;
        }
        loop()


        }
    

    return 0;
}