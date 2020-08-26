// Auther : Ahmed Wasfey  date: 2020-04-16 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
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
vector<vi> adj;
bool varr[55];
void dfs(int node ){
    if(varr[node])return;
    varr[node]=1;
    loop(i,0,adj[node].size()){
        dfs(adj[node][i]);
    }
}

int main () {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n  ,m ,a,b;
    cin>>n>>m;
    clr(varr,0);
    adj=vector<vi>(n+1);
    loop(i,0,m){
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }a=0;
    loop(i,0,n){
        if(!varr[i]){
        dfs(i);
        a++;
        }
    }
    cout<<(ll)(pow(2,n-a));
    return 0;
}