//2020-07-25
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
template <typename TT >
ostream &operator<<(ostream &oov,const vector<TT> &a)
{
    loop(i, 0, a.size())
         {  oov << a[i]; if(i!= a.size()-1)oov<< " ";}
    return oov;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s1, s2;
    vector<ll> cof ,ans; ll  x , __ans;
    while (getline(cin, s1) && getline(cin, s2))
    {
        stringstream x1(s1), x2(s2);
        cof.clear();
        ans.clear();
        while (x1>>x)cof.push_back(x);
        reverse(cof.begin() , cof.end());
        while (x2>>x)
        {   __ans=0;
            loop(i,0,cof.size())__ans+= cof[i]*pow(x , i);
            ans.push_back(__ans) ;
        }
        cout<<ans<<endl;
        
        
    }

    return 0;
}