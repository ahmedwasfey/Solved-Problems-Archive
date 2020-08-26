//2020-08-16 
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


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[8] , x;
    loop(i,1,7)
        cin>>a[i];
    x= a[1]+a[2]+a[3];
    cout<<x*x - a[1]*a[1]-a[3]*a[3]-a[5]*a[5]<<endl;
    return 0;
}