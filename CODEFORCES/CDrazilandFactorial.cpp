//2020-07-01 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M=2e5+5;



int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    string ans="",s,arr[]={"","","2","3","322","5","53","7","7222","7332"};
    int n ;cin>>n>>s;
    loop(i,0,n){
        ans = ans+ arr[ s[i]-'0' ];
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout <<ans<<endl;
    return 0;
}