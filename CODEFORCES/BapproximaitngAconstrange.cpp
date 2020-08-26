// Auther : Ahmed Wasfey  date: 2020-05-06 
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
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;
const int MAX=1e5+5;


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n ,cnt=1,arr[MAX];cin>>n;
    loop(i,0,n)cin>>arr[i];
    vi ans;
    loop(i,0,n-1){
        if(arr[i]-arr[i+1]==0)cnt++;
        else {
            cnt++;
            ans.push_back(cnt);
            cnt=1;
        }
    }
    
    if(cnt>1)ans.push_back(cnt);

    int id , mx=-1;
    loop(i,0,ans.size())if(ans[i]>=mx){
        mx=ans[i];
        id=i;
    }
    if(id!=0)mx++;
    cout<<(mx);
    return 0;
}