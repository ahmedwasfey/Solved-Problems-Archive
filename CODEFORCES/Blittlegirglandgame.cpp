//2020-06-01 
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
const int M=2e5+5;



int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    string s ; cin >>s;
    int numodd=0,sodd=(s.size()%2), f[30]={};
    loop(i,0,s.size())
        f[s[i]-'a']++;
    loop(i,0,28)if(f[i]%2==1)numodd++;
    if(numodd==1&&sodd==1)cout<<"First\n";
    else if(numodd==0&&sodd==0)cout<<"First\n";
    else {
        int sz=s.size();
        if(sz&1)cout <<"First\n";
        else cout <<"Second\n";
    }
  return 0;
}