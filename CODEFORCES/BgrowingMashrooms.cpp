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
typedef  pair<double, int>  prpr;
bool cmp(prpr p1 , prpr p2 ){
    if(p1.first>p2.first)return 1;
    else if(p1.first < p2.first)return 0;
    else return p1.second<p2.second; 
}
int main()
{
    int n;
    double a, b, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
   prpr arr[n];
    loop(i, 0, n)
    {
        cin >> a >> b;
        double l1 = t1 * a * (100-k) / 100, l2 = t1 * b *(100- k )/ 100;
        l1 += t2 * b, l2 += t2 * a;
        arr[i].first = max(l1, l2);
        arr[i].second = i + 1;
    }
    sort(arr, arr + n,cmp);

   loop(i,0,n)
        cout << arr[i].second << " " << fixed << setprecision(2) << arr[i].first << endl;
    return 0;
}