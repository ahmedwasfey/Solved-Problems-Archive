// Auther : Ahmed Wasfey  date: 2020-03-22
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
    double x;
    double y;
    node(double xi, double yi) : x(xi), y(yi) {}
};
vector<node> nodes;
struct edge
{
    int from, to;
    double des;

    edge(int from, int to) : from(from), to(to)
    {   double dx =nodes[from].x - nodes[to].x , dy =nodes[from].y- nodes[to].y;
        des =(dx*dx)+(dy*dy);
        des = sqrt(des);
       
    }

    bool operator<(const edge &e) const
    {
        return des > e.des;
    }
};
int n;
double MST(vector<vector<edge>> adjList)
{
    double  mstCost = 0;
	vi vis(n, 0);
	vector<edge> edges;			 // Save MST edges

	priority_queue<edge> q;		// 1) priority_queue to sort edges
	q.push( edge(0, 0 ) );
    while (!q.empty())	

    {
        edge e = q.top(); q.pop();
        if( vis[e.to] )	continue;
        vis[e.to]=1;
        mstCost+= e.des;
        loop(i,0,adjList[e.to].size()){
            edge near = adjList[e.to][i];
            if(!vis[near.to])q.push(near);
        }
    }
    return mstCost ;
}
vector<vector<edge>> adj;
int q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    double x, y;
    while (q--)
    {
        adj.clear();
        cin >> n;
        adj = vector<vector<edge>>(n + 1);
        nodes.clear();
        loop(i, 0, n)
        {
            cin >> x >> y;
            nodes.push_back(node(x, y));
            loop(j, 0, nodes.size() - 1)
            {
                adj[i].push_back(edge(i, j));
                adj[j].push_back(edge(j, i));
            }
        }
        
        cout <<fixed<<setprecision(2)<< MST(adj)<<endl;
        if(q>0)cout <<"\n";
    }

    return 0;
}