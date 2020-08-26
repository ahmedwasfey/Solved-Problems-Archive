// Auther : Ahmed Wasfey  date: 2020-05-12 
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
    int n,cnt=0 ,ss=0; cin >>n;
    string s, s0;
    loop(i,0,n){
        cin>>s;
       // P(s);
        if(s[0]=='1'){
            int x= count(s.begin(),s.end(),'0');
            if(x==s.size()-1)cnt+=x;
            else s0=s;
        }
        else if(s[0]=='0')ss=1;
        else s0=s;
    }
    if(s0=="")s0="1";
    if(ss)cout <<"0\n";
    else {
        cout <<s0;
        loop(i,0,cnt)cout<<'0';
    }
    return 0;
}