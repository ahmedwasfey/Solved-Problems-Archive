//2020-06-28
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

vi pegs, reslt(55);

void solve()
{

    int x, sx, num = 1;
    bool fnd = 0;
    while (pegs.size() < 52)
    {
        fnd = 0;
        loop(i, 0, pegs.size())
        {
            x = num + pegs[i];
            sx = sqrt(x);
            if (sx * sx == x)
            {
                pegs[i] = num;
                fnd = 1;
                num++;
                break;
            }
        }
        if (!fnd)
        {
            //cout << pegs.size() << "    " << num - 1 << endl;
            reslt[pegs.size()] = num - 1;
            pegs.push_back(num);
            num++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    solve();
    int t , n ; cin>>t;
    loop(i,0,t){
        cin>>n;cout<<reslt[n]<<endl;
    }
    return 0;
}