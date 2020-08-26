#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d)      memset(v, d, sizeof(v))
#define pb          push_back
#define MP          make_pair
#define P(x)        cout<<x<<"\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    double dp=0,dd=0,vp,vd,tx,f,c,t,tt;
    cin>>vp>>vd>>tx>>f>>c;
    t=vp*tx;
    t=t/(vd-vp);
    dd=t*vd;
    t+=tx;
    dp=t*vp;
   
    // P(dp);P(dd);
    int cnt=0;
    while (t>0&&dp<c)
    {  
        cnt++;
        t=dd/vd;
        dd=0;
        dp+=(t*vp);
        dp+=f*vp;
        t=dp/(vd-vp);
        dp+=t*vp;
        dd+=t*vd;
        //P(dp);P(dd);
      
    }
    P(cnt);

    return 0;
}