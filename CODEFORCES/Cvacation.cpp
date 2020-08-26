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
int n, arr[105], mem[105][4];

int mnrst(int i, int prevact)
{
    if (i == n)
        return 0;
    int &ret = mem[i][-1*prevact];
    if (ret != -1)
        return ret;
    ret = INF;
    if (arr[i] == 0)
        return ret = min(ret, 1 + mnrst(i + 1, -3));
    if (arr[i] == 1)
    {
        if (prevact != -2)
            ret = min(ret, mnrst(i + 1, -2));
        ret = min(ret, 1 + mnrst(i + 1, -3));
    }
    if (arr[i] == 2)
    {
        if (prevact != -1)
            ret = min(ret, mnrst(i + 1, -1));
        ret = min(ret, 1 + mnrst(i + 1, -3));
    }
    if (arr[i] == 3)
    {
        if (prevact != -1)
            ret = min(ret, mnrst(i + 1, -1));
        if (prevact != -2)
            ret = min(ret, mnrst(i + 1, -2));
        ret = min(ret, 1 + mnrst(i + 1, -3));
    }
 //   P(i);
   // P(prevact);
    //P(arr[i]);
   // P(ret);
    return ret ;
}
int main()
{
    cin >> n;
    clr(mem,-1);
    loop(i, 0, n)scanf("%i", arr+i);
    cout <<mnrst(0,0);
    return 0;
}