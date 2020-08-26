//2020-08-02
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M = 2e5 + 5;

int t, n, m;
char board[1005][1005];
bool blocked[8];
bool valid(int x, int y, int dir)
{
    if (blocked[dir])return 0;
    if (x >= 0 && y >= 0 && x < n && y < m)
    {
        if (board[x][y] == 'X') {
            blocked[dir]=1;return 0;
        }
        if (board[x][y]=='V')return 0;
        return 1;
    }
    blocked[dir]=1;
    return 0 ; 

}
void CLEAR(queue<ii> &a)
{
    queue<ii> q;
    swap(a, q);
}
int main()
{

    scanf("%d",&t);
    int rx, lx, uy, dy, steps, dest_x, dest_y;
    //string s;
   //vector<string> &tst = board;
    queue<ii> q;
    bool blo , fnd = 0;
    while (t--)
    {

        scanf("%d%d",&n,&m);
        CLEAR(q);
        steps = 0;
        fnd = 0;
        loop(i, 0, n)
        {
            scanf("%s",board+i);
            loop(j, 0, m)
            {
                if (board[i][j] == 'S')
                    board[i][j] = 'X', q.push({ i, j });
                if (board[i][j] == 'F')
                    dest_x = i, dest_y = j;
            }
        }
        while (!fnd && !q.empty())
        {
            int sz = q.size();
            steps++;
            while (sz--)
            {
                ii e = q.front();
                q.pop();
                if (e.first == dest_x && e.second == dest_y)
                {
                    fnd = 1;
                    break;
                }
                uy = dy = e.second, rx = lx = e.first;
                clr(blocked, 0); blo =0;
               for(int i=0 ; i <max(n, m)&& !blo ; i++)
                {
                    uy++, dy--, rx++, lx--;
                    if (valid(rx, e.second, 0))
                        board[rx][e.second] = 'V', q.push({ rx, e.second });
                    if (valid(lx, e.second, 1))
                        board[lx][e.second] = 'V', q.push({ lx, e.second });
                    if (valid(e.first, uy, 2))
                        board[e.first][uy] = 'V', q.push({ e.first, uy });
                    if (valid(e.first, dy, 3))
                        board[e.first][dy] = 'V', q.push({ e.first, dy });
                    if (valid(rx, dy, 4))
                        board[rx][dy] = 'V', q.push({ rx, dy });
                    if (valid(lx, dy, 5))
                        board[lx][dy] = 'V', q.push({ lx, dy });
                    if (valid(lx, uy, 6))
                        board[lx][uy] = 'V', q.push({ lx, uy });
                    if (valid(rx, uy, 7))
                        board[rx][uy] = 'V', q.push({ rx, uy });
                    blo =1;
                    loop(j,0,8)blo &=blocked[j];
                }
            }
        }
        if(fnd)printf("%d\n", steps-1);
        else printf("-1\n");
    }

    return 0;
}