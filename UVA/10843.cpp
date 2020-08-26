//2020-07-11
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
const int M = 2000000011;

ostream &operator<<(ostream &oov, const vector<ll> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}

ll modpowlog(ll b, ll p, ll m)
{
    ll r = 1;
    while (p)
    {
        if (p & 1)
            r = (__int128)r * b % m;
        b = (__int128)b * b % m;
        p /= 2;
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t , n ;
    cin>>t;
    loop(i,0,t){
        cin>>n;
        printf("Case #%i: %i\n", i+1 , modpowlog(n,n-2,M));
    }
    return 0;
}