// Auther : Ahmed Wasfey  date: 2020-05-14
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
typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
const int MAX = 35;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int t, n, k, ida, idb, sum, cnt, a[MAX], b[MAX];
    cin >> t;
    loop(i, 0, t)
    {
        cin >> n >> k;
        loop(i, 0, n) cin >> a[i];
        loop(i, 0, n) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        ida = idb = n - 1;
        sum = cnt = 0;

        loop(i, 0, n)
        {
            if (a[ida] < b[idb]&&cnt<k)
            {
                sum+=b[idb];
                idb--;
                cnt++;
            }
            else {
                sum+=a[ida];
                ida--;
            }
        }
        cout <<sum<<endl;
    }
    return 0;
}