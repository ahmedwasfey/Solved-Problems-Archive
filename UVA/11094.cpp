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
int visited[102][102];
vector<string> ss;
int m, n ,zz, qq;
int dx []= {0, 1 , 0, -1};
int dy []= {1, 0 , -1, 0};
char c;
bool valid(int z, int q)
{
    return z >= 0 && q >= 0 && z < m && q < n;
}

int dfs(int x, int y)
{   y=(y==-1 ? n-1 : y);
    y %= n;
    if((x==zz&&y==qq))return -1e5;
    if (!valid(x, y) || ss[x][y]!= c||visited[x][y] != -1)
        return 0;
    visited[x][y] = 1;
    int ret =0;
    loop(i,0,4)ret+= dfs(x+dx[i],y+dy[i]);
    return 1+ ret ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin >> m >> n)
    {
        ss = vector<string>(m, "");
        loop(i, 0, m) cin >> ss[i];
      
        cin >> zz >> qq;
        c = ss[zz][qq];
        clr(visited, -1);
        int ans =0;
        loop(i,0,m)loop(j,0,n){
            ans =max(ans,dfs(i,j));
        }
        cout <<ans<<endl;
    }

    return 0;
}