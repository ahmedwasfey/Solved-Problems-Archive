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
    set <double> s;
    int n, x , y,x0,y0 ;
    double ang,dx,dy;
    
        cin >>n>>x>>y;
        loop(i,0,n){      
            cin>>x0>>y0;
            dx=x0-x;
            dy=y0-y;
            if (dx==0)s.insert(INF);
       else s.insert(dy/dx);      
        }
        cout <<s.size()<<endl;
    
    
    return 0;
}