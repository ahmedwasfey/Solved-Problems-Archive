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
    int n , k ;cin>>n>>k;
    int numOfneg=0, arr[n+5];
    ll rslt=0;
    loop(i,0,n){
        cin>>arr[i];
        if(arr[i]<0)numOfneg++;
    }
    if(k<=numOfneg){
            loop(i,0,n){
                if(i<k)arr[i]*=-1;
                rslt+=arr[i];
            }
    }
    else {
        loop(i,0,n)arr[i]=abs(arr[i]);
        sort(arr,arr+n);        
        if(k-numOfneg &1)arr[0]*=-1;
    loop(i,0,n)rslt+=arr[i];
        
    }
                cout <<rslt<<endl;

    return 0;
}