#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x  << x<<endl ;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n , x,prev=-1,rslt=1;
    cin>>n;
    loop(i,0,n){
        cin>>x;
        if(x==1){
            if(prev!=-1)rslt*=i-prev;
            prev=i;
        }
    }
    if(prev==-1)cout<<"0";
    else cout<<rslt;
    return 0;
}