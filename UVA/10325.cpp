//2020-07-06
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x << " = { " << x << " }"<<endl
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

ll ans, n;
int m;
map<vector<ll> , bool> vistd;
vector<ll> nums, h;
void solve(vector<ll> x, int idx)
{
    ll b = 1,v;
    if (idx==m)
    {   if(x.size()==0)return;
        loop(i, 1, x.size()){
            b=x[i]*x[i-1];
            x[i]=b/__gcd(x[i],x[i-1]);
        }
        b=x[x.size()-1];
        if (x.size() & 1)
            ans += (n / b);
        else
            ans -= (n / b);
    }
    else {
        solve(x, idx + 1);
        x.push_back(nums[idx]);
        solve(x, idx + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    while (cin >> n >> m)
    {   h.clear();
        nums.clear();
        vistd.clear();
        ans=0;
        nums = vector<ll>(m);
        loop(i, 0, m) cin >> nums[i];
        solve(h,0);
        cout<<(n-ans)<<endl;
    }

    return 0;
}