//2020-07-19
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
    double s, x1, x2, t1, t2, d, p, des, mt1, mt2;
    bool before, oppisteme;
    cin >> s >> x1 >> x2 >> t1 >> t2 >> p >> d;
    if (x2 > x1)
    {
        if (d == -1.00)
            des = p + x2;
        else if (p <= x1)
            des = x2 - p;
        else
            des = 2 * s - p + x2;
        // P(des);
    }
    else
    {
        if (d == 1.00)
            des = 2 * s - p - x2;
        else if (p >= x1)
            des = p - x2;
        else
            des = p + s + s - x2;
    }
    mt1 = des * t1;
    mt2 = abs(x2 - x1) * t2;
    cout<<min(mt1 , mt2);
    // if(x2 > x1 && d==1.00 )oppisteme =0;
    // else if(x2< x1 && d==-1.00 )oppisteme =0;
    // else oppisteme =1;
    // if(x2>x1 && p< x1)before = 1;
    // else if(x2< x1 && p >  x1)before = 1;
    // else before =0;

    return 0;
}