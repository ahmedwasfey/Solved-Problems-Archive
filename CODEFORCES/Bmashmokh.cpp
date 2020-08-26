// Auther : Ahmed Wasfey  date: 2020-05-06
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n" \
                  << endl
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
const int MAX = 1e5 + 5;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    ll n, a, b, x, c;
    cin >> n >> a >> b;
    c = gcd(a, b);
    b /= c;
    a /= c;
    //P(b);
    loop(i, 0, n)
    {
        cin >> x;
        //cout<<x%b<<" ";
        cout<<( ((x*a) % b)/a)<<" ";
    }
    return 0;
}