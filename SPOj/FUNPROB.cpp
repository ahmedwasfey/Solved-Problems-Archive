//2020-08-07 
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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double p, q;
   
    while (1) {
        cin >>q >>p;
        if(p+q==0)break;
        if(p<q)cout <<"0.000000\n";
        else cout<<fixed <<setprecision(6)<<(p-q+1.0)/(p+1)<<"\n";
    }
    return 0;
}