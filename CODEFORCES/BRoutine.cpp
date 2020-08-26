// Auther : Ahmed Wasfey  date: 2020-05-13 
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
    int a[2],b[2],c[2];
    cin>>a[0]>>a[1]>>b[0]>>b[1];
    //sort(a,a+2);
    //sort(b,b+2);
    c[0]=a[0]*b[1];
    c[1]=a[1]*b[0];
    sort(c,c+2);
    c[0]=c[1]-c[0];
    int x= __gcd(c[0],c[1]);
    c[0]/=x;
    c[1]/=x;
    printf("%d/%d\n",c[0],c[1]);
    return 0;
}