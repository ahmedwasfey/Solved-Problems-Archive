// Auther : Ahmed Wasfey  date: 2020-05-13
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
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
const int MAX = 1e5 + 5;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    ll n, x, sum1 = 0, sum2 = 0;cin>>n;
    vi s1 , s2;
    loop(i, 0, n)
    {
        cin >> x;
        if (x > 0)
        {
            sum1 += x;
            s1.push_back(x);
        }
        else {
            //x=abs(x);
            sum2-=x;
            s2.push_back(abs(x) );
        }
    }
    if(sum1>sum2)cout<<("first\n");
    else if(sum1<sum2)cout<<("second\n");
    else {
        if(s1>s2)cout<<("first\n");
        else if(s1<s2)cout<<("second\n");
        else {
            if(x>0)cout<<("first\n");
            else cout<<("second\n");
        }
    }
    return 0;
}