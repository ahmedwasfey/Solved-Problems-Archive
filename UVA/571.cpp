#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define VISITED 1
#define UNVISITED -1
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int ca, cb, cc;
map <int , map<int , int >> vist;
enum enn
{

    fa,
    fb,
    ea,
    eb,
    pab,
    pba,
    s
};
struct state
{
    int a;
    int b;
    vector<enn> parent;
};
string arr[] = {
    "fill A\n",
    "fill B\n",
    "empty A\n",
    "empty B\n",
    "pour A B\n",
    "pour B A\n",
};
state fun(state p, enn op)
{
    //cout << op << "\n";
    state r;
    r.parent.clear();
    if (op == s)
        r.a = 0, r.b = 0;
    else if (op == fa)
        r.a = ca, r.b = p.b;
    else if (op == fb)
        r.a = p.a, r.b = cb;
    else if (op == ea)
        r.a = 0, r.b = p.b;
    else if (op == eb)
        r.a = p.a, r.b = 0;
    else if (op == pab)
    {
        if (p.a + p.b > cb)
        {
            r.a = p.a - cb + p.b, r.b = cb;
        }
        else
        {
            r.a = 0,
            r.b = p.b + p.a;
        }
    }
    else if (op == pba)
    {
        if (p.a + p.b > ca)
        {
            r.b = p.a - ca + p.b, r.a = ca;
        }
        else
            r.b = 0,
            r.a = p.b + p.a;
    }
    r.parent.insert(r.parent.begin(), p.parent.begin(), p.parent.end());
    r.parent.push_back(op);
    return r;
}
void bfs()
{   queue<state> q;
    state s;
    s.a = 0, s.b = 0;
  //  if(!q.empty())cout<<"ERROR--------------------------------------------ERROR\n";
    q.push(s);

    while (!q.empty())
    {
        state v, u = q.front();
        q.pop();
        if (vist[u.a][u.b] == 1)
        {
            //printf("gallon a :: %i gallon b :: %i \n", u.a, u.b);

            continue;
        }
        if (u.b == cc)
        {
            //cout << u.a << endl;
            loop(i, 0, u.parent.size()) cout << arr[(int)u.parent[i]];
            cout << "success\n";
            break;
        }

        vist[u.a][u.b] = 1;
        q.push(fun(u, fa));
        q.push(fun(u, fb));
        q.push(fun(u, ea));
        q.push(fun(u, eb));
        q.push(fun(u, pab));
        q.push(fun(u, pba));
    }
}


int main()
{
    while (cin >> ca >> cb >> cc)
    {
        vist.clear();
      //  clear(q);
        bfs();
    }

    return 0;
}