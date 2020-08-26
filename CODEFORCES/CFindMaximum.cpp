//2020-08-16
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans = 0, last1 = 0, ans2, carring = 0;
    cin >> n;
    int arr[n + 5], preSum[n + 5] = {0};
    loop(i, 1, n + 1)
    {
        cin >> arr[i];
        preSum[i] = preSum[i - 1] + arr[i];
    }
    string s;
    cin >> s;
    loop(i, 0, n) if (s[i] == '1') { ans += arr[i + 1]; }
    loopdesc(i, n - 1, 0)
    {
        if (s[i] == '1')
        {
            ans2 = preSum[i] + carring;
            ans = max(ans, ans2);
            carring += arr[i + 1];
        }
    }
    cout << ans << endl;
    return 0;
}