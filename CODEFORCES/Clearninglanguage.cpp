//2020-07-16
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

ostream &operator<<(ostream &oov, const vi &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i] << " ";
    }
    return oov;
}
vi vis(202, 0);
vector<vi> adj(205);

void dfs(int m)
{
    if(vis[m])return;
    vis[m]=1;
    loop(i,0,adj[m].size()){
        int chld = adj[m][i];
        dfs(chld);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, x , cnt=0;
    bool noone=true;
    cin >> n >> m;
    loop(i, 0, n)
    {
        cin >> k;
        if(k>0)noone = false ;
        loop(j, 0, k)
        {
            cin >> x;
            adj[100 + x].push_back(i + 1);
            adj[i + 1].push_back(100 + x);
        }
    }
    if(noone){
        cout<<n<<endl;
        return 0;
    }
    loop(i,1,n+1){
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<(cnt-1)<<endl;
    return 0;
}