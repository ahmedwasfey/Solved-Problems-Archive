//2020-08-07 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M=2e5+5;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll p, q, x;int cur;
    cin>>p>>q;
    x=p;
    string s = to_string(p), s2;
    loop(i, 0, s.size()-1) {
        s2=s;
        cur =s.size()-i-1;
        if (s[cur]<'9') {
            s[cur]='9';
            while (cur >=0)
            {
                cur--;
                if (s[cur]!='0') {
                    s[cur]--;break;
                }
                else s[cur]='9';
            }
        }
        istringstream(s)>>x;
        //x= stoi(s.c_str());
        if (p-x>q) {
          istringstream(s2)>>x;break;
        }
    }
    cout <<x<<endl;
    return 0;
}