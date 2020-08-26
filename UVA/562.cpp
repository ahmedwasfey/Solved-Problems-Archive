//2020-08-20
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
vi val;
int t, n;

int solved = 0;
int sumall, vis[101][50001];
int solve(int idx, int sum1)
{

    if (solved >= 7e8+50)
    {
        // I WAS DEBUGGING (CHECKING FOR HOW MANY ITTERATIONS )
        cout << idx << "\t MAX DEPTH RECHED \n";
        return 0;
    }
    if (vis[idx][sum1] != -1)
        return vis[idx][sum1];
    solved++;
    if (idx == n)
        return vis[idx][sum1]=abs(2 * sum1 - sumall);
    int choice1 = solve(idx + 1, sum1 + val[idx]);
    int choice2 = solve(idx + 1, sum1);
    return vis[idx][sum1]=min(choice1, choice2);
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> t;
    while (t--)
    {
        cin >> n;
        val.clear();
        val.resize(n + 1);
        clr(vis, -1);
        sumall = 0;
        solved = 0;
        loop(i, 0, n)
        {
            cin >> val[i];
            sumall += val[i];
        }
        cout << solve(0,0) <<"\n";
        //cout<<"\t\tsolved in "<<solved<<"  operation\n" ;
    }

    return 0;
}