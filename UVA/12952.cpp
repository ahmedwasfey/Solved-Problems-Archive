//2020-07-09 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M=2e5+5;

ostream &operator<<(ostream &oov,const vector<ll> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}



int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y ;
    while (cin>>x>>y)
    {
        cout<<max(x,y)<<"\n";
    }
    
    return 0;
}