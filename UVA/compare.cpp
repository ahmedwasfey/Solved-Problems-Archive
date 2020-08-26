//2020-06-29
#include <bits/stdc++.h>
#include<fstream>
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("output.txt", "w", stdout);
    ifstream in1 ("input1.txt"), in2("input2.txt");
    int i = 0;
    string n1, n2;
    while (1)
    {
       in1>>n1;
       in2>>n2;
        if (n1 != n2)
        {
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}