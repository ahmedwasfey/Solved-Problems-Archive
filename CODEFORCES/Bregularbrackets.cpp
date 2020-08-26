#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d)      memset(v, d, sizeof(v))
#define pb          push_back
#define MP          make_pair
#define P(x)        cout<<#x<<" = { "<<x<<" }\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{

    string s; 
    cin >>s;
    int cntf=0,cnts=0 , hlp=0;
    loop(i,0,s.size()){
        if(s[i]=='(')cntf++;
        else cnts++;
        if(cnts>cntf)cnts=cntf;
    }
    cout <<min(cntf,cnts)*2;
    return 0;
}