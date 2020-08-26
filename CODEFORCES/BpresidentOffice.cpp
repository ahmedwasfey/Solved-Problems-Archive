#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long
vector<string> adj;
set<char> ss;
int m, n;
char cc;

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
void ff(int xx, int yy)
{
    if (valid(xx - 1, yy) && adj[xx - 1][yy] != cc && adj[xx - 1][yy] != '.')
    {
       //cout <<"jjj";
        ss.insert(adj[xx - 1][yy]);
    }
    if (valid(xx, yy - 1) && adj[xx][yy - 1] != cc && adj[xx][yy - 1] != '.'){
       //cout <<"jjj";
        ss.insert(adj[xx][yy - 1]);}
    if (valid(xx, yy + 1) && adj[xx][yy + 1] != cc && adj[xx][yy + 1] != '.'){
       //cout <<"jjj";
        ss.insert(adj[xx][yy + 1]);}
    if (valid(xx + 1, yy) && adj[xx + 1][yy] != cc && adj[xx + 1][yy] != '.'){
       //cout <<"jjj";
        ss.insert(adj[xx + 1][yy]);}
}
int main()
{
    cin >> n >> m >> cc;
    string s;
    loop(i, 0, n)
    {
        cin >> s;
        adj.push_back(s);
    }

    loop(i, 0, n) loop(j, 0, m)
    {
        if (adj[i][j] == cc){//cout <<adj[i][j]<<i<<j<<endl;
            ff(i, j);}
    }
    int rslt = ss.size();
    cout << (rslt);
    return 0;
}