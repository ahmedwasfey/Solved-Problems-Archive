//2020-06-17
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)

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
    //freopen("input.txt", "r", stdin);
    string s;
    cin >> s;
    int n, sz = (s.size() / 2)+1, x, arr[sz] = {};
    cin >> n;
    loop(i, 0, n)
    {
        cin >> x;
        arr[x]++;
    }
    loop(i, 1, sz )
    {   arr[i]+=arr[i-1];
        if (arr[i] & 1)
            swap(s[i-1], s[s.size()-i]);
    }
    cout << s;
    return 0;
}