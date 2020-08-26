//2020-08-18 
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
const ll M=1e9+7;


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y, n ; 
    cin>>x>>y>>n;
    ll ans[3]={ y-x,x,y},sign =1 ;
    if(n%3==0)sign =-1;
    sign*=(((n/3)&1)==1 ? -1 : 1) ;
    cout <<(ans[n%3]*sign+2*M)%M<<endl;
    return 0;
}