#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d)      memset(v, d, sizeof(v))
#define pb          push_back
#define MP          make_pair
#define P(x)        cout<<#x<<" = { "<<x<<" }\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    int n ;ll x; cin >>n;
    set<ll> s ;
    loop(i,0,n){
            cin >>x;
            s.insert(x);
    }
    if(s.size()<3)cout <<"YES\n";
    else if(s.size()==3){
        set<ll> ::iterator i=s.begin();ll arr[3];
       loop(z,0,3){
           arr[z]=*i;i++;
       }
       if(arr[1]-arr[0]==arr[2]-arr[1])cout <<"YES\n";
       else cout <<"NO\n";
    }
    else cout <<"NO\n";
    return 0;
}