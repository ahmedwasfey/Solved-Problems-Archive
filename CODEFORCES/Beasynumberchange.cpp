#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v <= en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << x<<endl ;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int MAX = 10e5+5;
int numOfFact(int n){
int ret=2;

for(int i =2;i*i<=n ; i++ ){
    if(i*i==n)ret+=1;
    else if(n%i==0)ret+=2;
}
return ret;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int rslt=0, t,x,y,z,vstd[MAX]={};
    map<int , int > mp;
    cin>>x>>y>>z;
    loop(i,1,x)loop(j,1,y)loop(k,1,z){
        t=i*j*k;
        if(vstd[t]==1)rslt+=mp[t];
        else {
            vstd[t]=1;
            mp[t]=numOfFact(t);
            rslt+=mp[t];
        }
    }
    cout <<rslt-1;
    return 0;
}