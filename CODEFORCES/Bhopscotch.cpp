// Auther : Ahmed Wasfey  date: 2020-04-29
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
typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    double a, x, y;
    cin >> a >> x >> y;
    if (x <= -a || x >= a || y <= 0)
        cout << "-1\n";
    else if (y < a)
    {
        if (abs(x) < a / 2)
            cout << "1\n";
        else
            cout << "-1\n";
    }
    else
    {
        if ((int)y % (int)a == 0)
            cout << "-1\n";
        else
        {
            y -= a;
            int c = y / a;
            if (c & 1)
            {
                if (x == 0)
                    cout << "-1\n";
                else
                {
                    c = (c + 1) / 2;
                    c = (3 * c) - 2;
                    if (x > 0)
                        cout << c + 3 << endl;
                    else
                        cout << c + 2 << endl;
                }
            }
            else
            {
                if (abs(x) < a / 2)
                {
                    c = c / 2;
                    cout << 3 * c + 2 << endl;
                }
                else cout <<"-1\n";
            }
        }
    }
    return 0;
}