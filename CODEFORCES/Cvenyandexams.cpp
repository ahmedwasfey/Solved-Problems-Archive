//2020-06-28 
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
    ll n  , r , avg,ans=0 ,sum=0,dsum;cin>>n>>r>>avg;
    vii arr(n);
    loop(i,0,n){
        cin>>arr[i].second>>arr[i].first;
        sum+=arr[i].second;
    }
    dsum=avg*n;
    if(sum >=dsum)return puts ("0\n");
    dsum -= sum;
    sort(arr.begin(),arr.end());
    loop(i,0,n){
        ll z=  r - arr[i].second;
        if(dsum >z)dsum -=z, ans += z*arr[i].first;
        else {
            ans += dsum*arr[i].first;
            break;
        }
    }
    cout <<ans<<endl;

    return 0;
}