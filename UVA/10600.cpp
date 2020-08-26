// Auther : Ahmed Wasfey  date: 2020-03-26
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
struct edge
{
    int from, to, w;
    edge(int from, int to, int w) : from(from), to(to), w(w) {}
    bool operator<(const edge &e) const
    {
        return w > e.w;
    }
    bool operator== (const edge &e) const {
        return (e.from == from && e.to == to && e.w ==w) ;
    }
};
struct DisjSet
{
    vi parent, rank;
    int numOftrees;
    DisjSet(int n)
    {
        numOftrees = n;
        parent = vi(n+1), rank = vi(n+1, 1);
        loop(i, 0, n+1) parent[i] = i;
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
int n, m;
vector<edge> edges;
pair<int , vector<edge> > kruskal(edge del)
{   int mnCost=0 ;
    vector<edge> rslt;
    DisjSet dj(n);
    priority_queue<edge> q;
    loop(i, 0, m)
    {       if(edges[i]==del)continue;
            q.push(edges[i]);
    }
    while (!q.empty())
    {   
        edge e = q.top(); q.pop();
        
        if(!dj.connected(e.from,e.to)){

            rslt.push_back(e);
            mnCost+=e.w;
            dj.Union(e.to,e.from);
        }
    }
    if(rslt.size()==n-1)
    return MP(mnCost,rslt);
    return MP(-1,rslt);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        edges.clear();
        cin >> n >> m;
        loop(i, 0, m)
        {
            cin >> a >> b >> c;
            edges.push_back(edge(a, b, c));
        }
        pair<int,vector<edge>> kr=kruskal(edge(-1,0,0));
        int mnm = INF ;
        loop(i,0,n-1){
            a=kruskal(kr.second[i]).first;
            if(a!=-1){
                if(a<mnm)mnm=a;
               }
        }
        cout<<kr.first<<" "<<mnm<<endl;
    }

    return 0;
}