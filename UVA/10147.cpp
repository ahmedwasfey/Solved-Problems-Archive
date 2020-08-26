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
pair<int , vector< edge > > prim (vi vstd){


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,t ,n,m; cin >>t;
    vi vstd ;
    while (t--)
    {   
        cin>>n;
        vstd= vi(n+2,0);
        loop(i,0,n){cin>>x>>y;nodes.push_back(node(x,y));}
        cin>>m;
        loop(i,0,m){cin>>x>>y;
    }
    
    return 0;
}