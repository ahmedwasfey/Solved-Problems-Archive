/*I am revising binary search algorithm but it can be solved trivially*/


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
ll n, m, xc, yc, dx, dy;
ll bsrch()
{
    ll fx ,fy, st = 0, en = max(n,m)+5, mid;
    while (st <en)
    {   
        mid = st + (en-st+1) / 2;
        
       if(mid==0)return mid;
        fx=xc+dx*mid;
        fy =yc+dy*mid;
     // P(mid);P(st);P(en); P(fx);P(fy);//P(xc);P(yc);
        if(fx>n||fy>m||fx<1||fy<1)en=mid-1;
        else  st=mid;
    }
    return st ;
}
int main()
{
    int k;
    cin >> n >> m >> xc >> yc >> k;
    ll rslt=0;
    loop(i, 0, k)
    {
        cin >> dx >> dy;
        ll mx;
        mx=bsrch();
      // P(mx);
       rslt+=mx;
        xc=xc+dx*mx;
        yc=yc+dy*mx;
    }
    cout <<rslt<<endl;

    return 0;
}