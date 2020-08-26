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
const int M=3e5+5;


template <typename TT >
ostream &operator<<(ostream &oov, const vector<TT> &a)
{
    loop(i, 1, a.size())
    {
        oov << a[i]; if (i!= a.size()-1)oov<< " ";
    }
    return oov;
}

int nxt[M];
int get_next(int x) {
    if (nxt[x]==x)return x;
    return nxt[x]=get_next(nxt[x]);
}
void init(int n) {
    loop(i, 0, n)nxt[i]=i;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, l, r, x; cin >>n >>m;
    vi ans(n+1);
    init(n+5);
    loop(i, 0, m) {
        cin>>l>>r>>x;
        int cur = get_next(l);
        while (cur <= r)
        {
            if (cur != x)nxt[cur]=cur +1, ans[cur]=x;
            else cur = cur +1;
            cur= get_next(cur);
        }
    }
    cout<<ans<<endl;

    return 0;
}