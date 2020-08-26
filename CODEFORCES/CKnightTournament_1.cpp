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

template <typename TT >
ostream &operator<<(ostream &oov, const vector<TT> &a)
{
    loop(i, 1, a.size())
    {
        oov << a[i]; if (i!= a.size()-1)oov<< " ";
    }
    return oov;
}
set <int > s;
void init(int n) {
    loop(i, 0, n)
        s.insert(i);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, l, r, x, cur;
    cin>>n>>m;
    vi to_del, ans(n+1, 0);
    init(n+1);
    set<int> &tst =s;
    loop(i, 0, m) {
        cin>>l>>r>>x;
        auto f = s.lower_bound(l);
        while (*f<=r && f != s.end())
        {
            if (*f!=x) ans[*f]=x, to_del.push_back(*f);
            f++;
        }
        loop(k, 0, to_del.size())
            s.erase(to_del[k]);
        to_del.clear();
    }
    cout<<ans<<endl;
    return 0;
}