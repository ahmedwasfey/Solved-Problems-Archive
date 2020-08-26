// Auther : Ahmed Wasfey  date: 2020-03-25
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << x << endl;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
struct node
{
    int x;
    int y;
    node(int xi, int yi) : x(xi), y(yi) {}
};
vector<node> nodes;
struct edge
{
    int from, to;
    double des;

    edge(int from, int to) : from(from), to(to)
    {
        double dx = nodes[from].x - nodes[to].x, dy = nodes[from].y - nodes[to].y;
        des = (dx * dx) + (dy * dy);
        des = sqrt(des);
    }

    bool operator<(const edge &e) const
    {
        return des > e.des;
    }
};
struct DisjSet
{
    vi parent, rank;
    int numOftrees;
    DisjSet(int n)
    {
        numOftrees = n;
        parent = vi(n), rank = vi(n, 1);
        loop(i, 0, n) parent[i] = i;
    }
    int findSetParent(int i)
    {
        if (parent[i] == i)
            return i;
        return parent[i] = findSetParent(parent[i]);
    }
    void Union(int x, int y)
    {
        x = findSetParent(x);
        y = findSetParent(y);
        if (x == y)
            return;
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
int n;
vector<edge> edges;
vector<edge> kruskal(DisjSet ds)
{
    vector<edge> rslt;
    priority_queue<edge> q;
    loop(i, 0, edges.size()) q.push(edges[i]);
    while (!q.empty())
    {
        edge e = q.top();
        q.pop();
        if (!ds.connected(e.from, e.to))
        {
            rslt.push_back(e);
            ds.Union(e.to, e.from);
        }
    }
    return rslt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, m;
    cin >> t;
    double x, y;
    while (t--)
    {
        cin >> n;
        nodes.clear(), edges.clear();
        loop(i, 0, n)
        {
            cin >> x >> y;
            nodes.push_back(node(x, y));
        }
        DisjSet dj = DisjSet(n);
        cin >> m;
        int z0, z1;
        loop(i, 0, m)
        {
            cin >> z0 >> z1;
            dj.Union(z0 - 1, z1 - 1);
        }
        loop(i, 0, n) loop(j, i + 1, n)
        {
            if (!dj.connected(i, j))
            {
                edges.push_back(edge(i, j));
               // edges.push_back(edge(j, i));
            }
        }
        vector<edge> hh = kruskal(dj);
       // P(hh.size());
        if (hh.size() == 0)
            cout << "No new highways need\n";
        loop(i, 0, hh.size()) cout << hh[i].from + 1 << " " << hh[i].to + 1 << endl;
        if (t)
            cout << "\n";
    }
    return 0;
}