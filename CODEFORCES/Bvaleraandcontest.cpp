// Auther : Ahmed Wasfey  date: 2020-05-01 
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
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;

vi ans;
void sol (int s , int r){
    if(r==0)return;
    int c=s/r, rem= s% r;
    loop(i,0,r){
        ans.pb(c+(rem>0));
        rem--;
    }

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n , k , l , r,sa, sk;
    cin>>n>>k>>l>>r>>sa>>sk;
    sol(sk,k);
    sol(sa-sk,n-k);
    loop(i,0,ans.size())cout<<(ans[i])<<" ";
    return 0;
}