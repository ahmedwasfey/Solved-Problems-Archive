//2020-07-29
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
template <typename TT>
ostream &operator<<(ostream &oov, const vector<TT> &a)
{
    loop(i, 0, a.size())
    {
        oov << a[i];
        if (i != a.size() - 1)
            oov << " ";
    }
    return oov;
}
vi cur_black, best_black, nodes;
int n;
vector<vi> adj;
bool valid_as_black(int v)
{
    loop(i, 0, adj[v].size()) if (nodes[adj[v][i]] == 0) return 0;
    return 1;
}
void backtrack(int node)
{
    if (node == n+1)
    {
        if (cur_black.size() > best_black.size())
            best_black = cur_black;
        return;
    }
    if (valid_as_black(node))
    {
        nodes[node] = 0;
        cur_black.push_back(node);
        backtrack(node + 1);
        nodes[node] = 1;
        cur_black.pop_back();
    }
    backtrack(node + 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t ,m,a,b; cin>>t; 
    while (t--)
    {
     cin>>n>>m; 
     cur_black.clear();
     best_black.clear();
     nodes = vi(n+1, 1);
     adj = vector<vi> (n+1);
     loop(i,0,m){
         cin>>a>>b;
         adj[a].push_back(b);
         adj[b].push_back(a);
     }   
     backtrack(1);
    cout<<best_black.size()<<"\n"<<best_black<<"\n";
    }
    
    return 0;
}