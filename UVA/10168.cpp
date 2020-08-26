//2020-07-06
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
const int M = 1e7 + 5;

ostream &operator<<(ostream &oov, const vector<ll> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}
bool prime_arr[M];
void seive()
{
    clr(prime_arr, 1);
    prime_arr[0] = prime_arr[1] = 0;
    loop(i, 2, M)
    {
        if (prime_arr[i] == 1)
        {
            for (int j = i * 2; j < M; j += i)
            {
                prime_arr[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int x = 10000000;
    seive();
    while (cin >> x)
    {

        if (x < 8)
        {
            cout << "Impossible.\n";
            continue;
        }
        else if (x & 1)
            x -= 5, cout << "2 3 ";
        else
            x -= 4, cout << "2 2 ";
        loop(i, 0, M) if (prime_arr[i] == 1)
        {
            if (prime_arr[x - i])
            {
                cout << i << ' ' << x - i << endl;
                break;
            }
        }
    }
    
    return 0;
}