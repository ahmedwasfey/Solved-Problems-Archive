/* autor : Ahmed Wasfey
*/

#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
typedef long long ll;

string s, s0;
map<string, bool> mp;
bool wining(string toe)
{
    bool diag = 0, col = 0, row = 0;
    if (toe[0] != '.' && toe[0] == toe[4] && toe[4] == toe[8])
        diag = 1;
    if (toe[2] != '.' && toe[2] == toe[4] && toe[4] == toe[6])
        diag = 1;
    if (toe[0] != '.' && toe[0] == toe[3] && toe[3] == toe[6])
        col = 1;
    if (toe[1] != '.' && toe[1] == toe[4] && toe[4] == toe[7])
        col = 1;
    if (toe[2] != '.' && toe[2] == toe[5] && toe[5] == toe[8])
        col = 1;
    if (toe[0] != '.' && toe[0] == toe[2] && toe[2] == toe[1])
        row = 1;
    if (toe[3] != '.' && toe[3] == toe[4] && toe[4] == toe[5])
        row = 1;
    if (toe[6] != '.' && toe[6] == toe[7] && toe[7] == toe[8])
        row = 1;
    return diag || col || row;
}
void bfs()
{
    queue<string> q;
    q.push(s0);
    int sz, turn = 1;
    while (!q.empty())
    {
        sz = q.size();
        while (sz--)
        {
            string u = q.front();
            q.pop();
            bool win = wining(u);
            if (u.find(".") == string ::npos)
                mp[u] = 1;
            if (win)
            {
                mp[u] = 1;
                continue;
            }
            else
            {

                // bool fnd =0;
                loop(i, 0, 9)
                {
                    if (u[i] == '.')
                    {
                        if (turn == 1)
                            u[i] = 'X';
                        else
                            u[i] = 'O';
                        q.push(u);
                        u[i] = '.';
                    }
                }
            }
        }
        turn = 1 - turn;
    }
}
int main()
{
    s0 = ".........";
    bfs();
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        if (mp[s] == 1)
            cout << "valid\n";
        else
            cout << "invalid\n";
    }

    return 0;
}