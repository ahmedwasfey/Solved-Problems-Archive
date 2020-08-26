//2020-07-07
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

int n, t;
vi arn, art;
unordered_set<int> lcms;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    while (1)
    {
        cin >> n >> t;
        if(n+t==0)break;
        lcms.clear();
        arn = vi(n);
        art = vi(t);
        loop(i, 0, n)
        {
            cin >> arn[i];
        }
        loop(i, 0, t)
        {
            cin >> art[i];
        }
        int b0, b1, b2;
        loop(i, 0, n)
        {
            loop(j, i + 1, n)
            {
                b0 = arn[i] * arn[j] / __gcd(arn[i], arn[j]);
                loop(z, j + 1, n)
                {
                    b1 = b0 * arn[z] / __gcd(arn[z], b0);
                    loop(k, z + 1, n)
                    {
                        b2 = b1 * arn[k] / __gcd(arn[k], b1);
                        lcms.insert(b2);
                    }
                }
            }
        }
        loop(i, 0, art.size())
        {
            int d, hight, mnhight = -1, mxhight = INT_MAX;
            for (auto j : lcms)
            {
                if (art[i] % j == 0)
                {
                    mnhight = mxhight = art[i];
                    break;
                }
                d = art[i] / j;
                hight = d * j;
                if (hight > mnhight)
                    mnhight = hight;
                hight = (d + 1) * j;
                if (hight < mxhight)
                    mxhight = hight;
            }
            cout << mnhight << " " << mxhight << "\n";
        }
    }

    //cout <<;
    return 0;
}