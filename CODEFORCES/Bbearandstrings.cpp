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
    int n ,x=0, prev=0,rslt=0;
    string s,sb;
    cin>>s;
    n=s.size();

 loop(i,0,n){
        if(i<n-3){
            sb= s.substr(i,4);
            if(sb=="bear"){
                int lft = 1+i;
                int rght = n-3-i;
                
                rslt+= (lft-prev)*rght;
                prev=lft;
            }
    }
    else break;
    }
    cout <<rslt;
    return 0;
}