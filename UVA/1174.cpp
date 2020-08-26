//2020-06-29
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M = 2e5 + 5;

struct edge
{
    int from, to, w;
    edge(int from, int to, int w) : from(from), to(to), w(w) {}
    bool operator<(const edge &e) const
    {
        return w > e.w;
    }
    bool operator==(const edge &e) const
    {
        return (e.from == from && e.to == to && e.w == w);
    }
};

struct DisjSet
{
    vi parent, rank;
    int numOftrees;
    DisjSet(int n)
    {
        numOftrees = n;
        parent = vi(n + 1), rank = vi(n + 1, 1);
        loop(i, 0, n + 1) parent[i] = i;
    }
    int findSetParent(int i)
    {
        if (parent[i] == i)
            return i;
        return parent[i] = findSetParent(parent[i]);
    }
    int Union(int x, int y)
    {
        x = findSetParent(x);
        y = findSetParent(y);
        if (x == y)
            return 0;
        if (rank[x] < rank[y])
            parent[x] = y;
        else if (rank[y] < rank[x])
            parent[y] = x;
        else
        {
            parent[x] = y;
            rank[y]++;
        }
        numOftrees--;
        return 1;
    }
    bool connected(int x, int y)
    {
        x = findSetParent(x);
        y = findSetParent(y);
        if (x == y)
            return true;
        return false;
    }
};

int kruskal(int n, vector<edge> adj)
{
    DisjSet dj(n);
    priority_queue<edge> q;
    
    int ans = 0;
    loop(i, 0, adj.size()) q.push(adj[i]);
    while (!q.empty())
    {
        edge e = q.top();
        q.pop();
        if (dj.Union(e.from, e.to) != 0)
            ans += e.w;
    }
    return ans;
}
int main()
{
    //   ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
   //freopen("output.txt", "w", stdout);
  // freopen("intput.txt", "r", stdin);
    int t, w, n, e,idx;
    string s1, s2;
    cin >> t;
    map<string, int> mp;
    vector<edge> adj;
    idx=0;
    while (t--)
    {
        cin >> n >> e;
        mp.clear();
        adj.clear();
        idx =0;
        loop(i, 0, e)
        {
            cin >> s1 >> s2 >> w;
            //cout << mp[s1] << mp[s2];
            if (mp[s1] == 0)
                mp[s1] = ++idx;
            if (mp[s2] == 0)
                mp[s2] = ++idx;
            adj.push_back(edge(mp[s1], mp[s2], w));
            adj.push_back(edge(mp[s2], mp[s1], w));
            map<string, int> mp;
            vector<edge> adj;
        }
        cout<<(kruskal(n,adj))<<"\n";if(t>0)cout<<"\n";
    }

    return 0;
}