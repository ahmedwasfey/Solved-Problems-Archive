//2020-07-05
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdesc(v, st, en) for (int v = st; v >= en; v--)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define P(x) cout << #x << " = { " << x << " }\n"
#define PI acos(-1)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const int M = 2e7 + 5;
int numOfSteps =0;


ostream &operator<<(ostream &oov, const ii &a)
{
    {
        oov << "("<<a.first << ", " << a.second <<")\n";
    }
    return oov;
}

bool is_prime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
bool arr[M];
void seive()
{
    clr(arr, 1);
    arr[0]=arr[1]=0;
    loop(i,2,M){
        if(arr[i]==1){
            for(int j= i*2 ; j<M ;j+= i){
                arr[j]=0;
                numOfSteps++;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    seive();
    vii ans ;
    ans.push_back({2,3});
    loop(i,5,M){
        if(arr[i]&arr[i-2])ans.push_back({i-2,i});
    }
    int indx;
    P(numOfSteps);
    while (cin>>indx)
    {
        cout<<(ans[indx]);
    }
    
    return 0;
}