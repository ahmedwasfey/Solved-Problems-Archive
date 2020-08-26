//2020-07-18
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

ostream &operator<<(ostream &oov, const vi &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}
ll choose(int n, int x)
{
    vi nom, denom;
    ll b=1 , c=1 ,z;
    loop(i, 2, n + 1)
    {
        nom.push_back(i);
    }
    loop(i, 2, x + 1) denom.push_back(i);
    loop(i, 2, n - x + 1) denom.push_back(i);
    loop(i, 0, nom.size())
    {
        loop(j, 0, denom.size())
        {
           z= __gcd(nom[i], denom[j]);
           nom[i]/=z;
           denom[j]/=z;
        }
    }
    loop(i,0,nom.size())b*=nom[i];
    loop(i,0,denom.size())c*=denom[i];

    return b/c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c, ans=0;
    cin >> a >> b >> c;
    loop(i,4,c){
        ans+= (choose(a,i)*choose(b,c-i));
    }
    cout<<(ans)<<endl;

    return 0;
}