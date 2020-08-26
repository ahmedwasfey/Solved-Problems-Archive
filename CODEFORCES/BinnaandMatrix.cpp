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

int main()
{
    set<int> s;
    int n, m, x, y;
    cin >> n >> m;
    char c;
    bool can = 1;
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            cin >> c;
            if (c == 'G')
                x = j;
            else if (c == 'S')
                y = j;
        }
   
        if (x>y)can =0;
        else s.insert(y-x);
    }
   
   if(can)cout<<s.size()<<endl;
   else cout <<"-1\n";
    return 0;
}