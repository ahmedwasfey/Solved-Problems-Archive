//2020-07-03
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

struct node
{
    bool vistd;
    queue<int> s1, s2;
    const bool operator==(const node &a)
    {
        return (s1 == a.s1 && s2 == a.s2);
    }
    void pop()
    {
        s1.pop();
        s2.pop();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    vector<node> nodes;
    node s, g;
    stack<int> s1,s2;
    int n, k1, k2, x;
    cin >> n >> k1;
    loop(i, 0, k1)
    {
        cin >> x;
        s.s1.push(x);
    }
    cin >> k2;
    loop(i, 0, k2)
    {
        cin >> x;
        s.s2.push(x);
    }
    //s.fill(s1,s2);
    nodes.push_back(s);
    x=0;
    while (1)
    {   x++;
        g = s;
        k1 = g.s1.front();
        k2 = g.s2.front();
        g.pop();
        if (k1 > k2)
        {
            g.s1.push(k2);
            g.s1.push(k1);
        }
        if (k2 > k1)
        {
            g.s2.push(k1);
            g.s2.push(k2);
        }
        if (g.s1.empty())
            {cout <<x<<" "<<2<<endl;return 0;}
        if (g.s2.empty())
            {cout<<x<<" 1\n";return 0;}
        loop(i, 0, nodes.size()) if (nodes[i] == g)
        {
            return puts("-1\n");
        }
        nodes.push_back(g);
        s=g;

    }

    return 0;
}