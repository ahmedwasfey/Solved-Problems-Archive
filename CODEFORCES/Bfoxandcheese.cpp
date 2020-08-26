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
int car[]={2,3,5};
vi fun(int a){
    int cnt ;
    vi res;
    loop(i,0,3){
        cnt =0;
        while (a%car[i]==0)
        {
            cnt++;
            a/=car[i];
        }
        res.push_back(cnt);
    }
    res.push_back(a);
    return res;
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b ; vi x,y;
    cin>>a>>b;
    x=fun(a);
    y=fun(b);
    if(x[3]!=y[3])cout<<"-1";
    else cout<<abs(x[0]-y[0])+abs(x[1]-y[1])+abs(x[2]-y[2]);
    return 0;
}