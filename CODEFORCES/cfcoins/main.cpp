#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int main(){
    ll a,b,n,s,z;
    int q;cin>>q;
    while(q--){
        cin>>a>>b>>n>>s;
        z=s/n;
        if(min(a,z)*n>=s-b)cout <<"yes\n";
        else cout <<"NO\n";
    }
    return 0;
}