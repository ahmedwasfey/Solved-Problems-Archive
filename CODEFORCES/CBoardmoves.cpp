// Auther : Ahmed Wasfey  date: 2020-05-14 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;
const int MAX=1e5+5;

ll ans (ll n ){
    ll x= n/2;
    x=(x*(x+1)*(2*x+1))/6;
    return x*8;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n ; ll y; cin>>n;
    loop(i,0,n){
        cin>>y;
        cout<<(ans(y))<<"\n";
    }
    return 0;
}