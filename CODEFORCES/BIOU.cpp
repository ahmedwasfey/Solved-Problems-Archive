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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n , m ,a,b,c; cin>>n>>m;
vii ow(n);
loop(i,0,m){
cin>>a>>b>>c;
ow[a-1].first+=c;
ow[b-1].second+=c;
}
int rslt =0;
loop(i,0,n){
if(ow[i].first>ow[i].second)rslt+=ow[i].first-ow[i].second;
}
cout<<rslt<<endl;


    return 0;
}