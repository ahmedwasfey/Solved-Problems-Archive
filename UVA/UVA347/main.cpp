#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,e) for (int v=0;v<e;v++)
ll b , p , m ;
ll pwr(ll power){
    if(power==0)return 1;
    if(power==1)return b;
    ll hlf =pwr(power/2);
    hlf%=m;
    return ((hlf*hlf)%m)*(power&1 ? b : 1);
}
int main(){
while (cin>>b>>p>>m)
{
    b%=m;
    cout<<pwr(p)%m<<endl;
}

    return 0;
}