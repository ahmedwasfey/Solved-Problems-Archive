#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long

int main()
{
    int x=1, n , m , k ; cin>>n>>m >>k;
    int u,v,y,f[n+5]={};
    loop(i,0,m){
            scanf("%i",&y);
            f[y]++;
    }
    loop(i,0,k){
            scanf("%i %i", &u, &v);
        if(f[x]>0)continue ;
        if(u==x)x=v;
        else if(v==x)x=u;
       // cout <<x<<"  --> x\n";
    }
cout <<x;

    return 0;
}