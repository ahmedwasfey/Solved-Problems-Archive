#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{   int n , m ,k;
    double  r1[5005],  p1[5005], p2[5005],a,b,cr1,cp1,cp2,r2;
    cin >> n;
    loop(i, 0, n) cin >> r1[i];
    cin >> m;
    loop(i, 0, m) cin >> p1[i];
    cin >> k;
    loop(i, 0, k) cin >> p2[i];
    cin >>a>>b;
    cr1=*max_element(r1,r1+n);
    cp1=*max_element(p1,p1+m);
    cp2=*min_element(p2,p2+k);
   // P(cr1);P(cp1);P(cp2);
    r2= (b*cp1*cr1*cr1)/((a*cp2)+(b*cp1));
    r2=sqrt(r2);
    cout<<fixed<<setprecision(15)<<  r2<<endl;

    return 0;
}