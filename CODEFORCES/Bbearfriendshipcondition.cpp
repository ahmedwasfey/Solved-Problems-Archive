// Auther : Ahmed Wasfey  date: 2020-05-02
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
typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;

vector<vi> adj;
int vis[150000];
pair<int, int> dfs(int n)
{    vis[n]=1;
    int frind, nodes = 1, edges = 0;
    loop(i, 0, adj[n].size())
    {
        frind = adj[n][i];
        if (!vis[frind])
        { 
            ii s= dfs(frind);
            nodes+=s.first;
            edges+=s.second;
        }
    }
    edges+=adj[n].size();
    return MP(nodes,edges);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n, m, a, b;
    cin >> n >> m;
    adj = vector<vi>(n);
    clr(vis, 0);
    loop(i, 0, m)
    {
        cin >> a >> b;
        adj[a - 1].pb(b - 1);
        adj[b - 1].pb(a - 1);
    }
   loop(i,0,n){
       if(vis[i]==0){
           ii s=dfs(i);
           s.second/=2;
           if(s.second != (ll)s.first*(s.first-1)/2)return puts("NO");
       }
   }
    cout<<"YES\n";
    return 0;
}
