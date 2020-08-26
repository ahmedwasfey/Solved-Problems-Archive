// Auther : Ahmed Wasfey  date: 2020-04-15
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
vii ps;
struct edge
{
    int from, to;
    double w;
    edge(int from, int to) : from(from), to(to)
    {
        double dx = ps[from].first - ps[to].first,
               dy = ps[from].second - ps[to].second;
        dx *= dx, dy *= dy;
        w = sqrt(dx + dy);
    }
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

int t, s, p, a, b;

vector<edge> kruskal(vector<edge> eds)
{
    priority_queue<edge> pq;
    vector<edge> res;
    DisjSet dj(p + 1);
    loop(i, 0, eds.size()) pq.push(eds[i]);
    while (!pq.empty())
    {
        if (dj.numOftrees == 1)
            break;
        edge e = pq.top();
        pq.pop();
        if (!dj.connected(e.to, e.from))
        {
            res.push_back(e);
            dj.Union(e.to, e.from);
        }
    }
    return res;
}
double calc(vector<edge> mst)
{
   
    
    int rid=0, &ss=s;
    s--;
    loop(i, 0, mst.size())
    {  
        s--;
        if(s<0)break;
        rid++;
    }
    return mst[rid].w;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    vector<edge> edlist, mst;
    while (t--)
    {
        cin >> s >> p;
        ps.clear();
        edlist.clear();
        loop(i, 0, p)
        {
            cin >> a >> b;
            ps.push_back(MP(a, b));
        }
        loop(i, 0, p) loop(j, i + 1, p)
            edlist.push_back(edge(i, j));
        mst = kruskal(edlist);
        reverse(mst.begin(), mst.end());
        //loop(i, 0, mst.size()) P(mst[i].w);
        cout<<fixed<<setprecision(2)<<(calc(mst))<<"\n";
    }

    return 0;
}
/*
2
1 4  
0 100 0 300 0 600 750 750
3 4  
0 100 0 300 0 600 750 750
*/