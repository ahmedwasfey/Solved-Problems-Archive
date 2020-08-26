//2020-05-18 
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
const int M=1e5+5;      



int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n , d; cin >>n>>d;
    vii arr(n);ll sum=0,mxsum=-1;
    loop(i,0,n)cin>>arr[i].first>>arr[i].second;
    sort(arr.begin(),arr.end());
    int l=0,r=0;
	for(l=0;l<n;++l){
		while(r<n && abs(arr[l].first-arr[r].first)<d)sum+=arr[r].second,++r;
		if(sum>=mxsum)mxsum=sum;
        sum-=arr[l].second;
	}    
    cout<<(mxsum);
    
    return 0;
}