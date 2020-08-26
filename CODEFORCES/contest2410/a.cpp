#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int main(){
int x, y;cin>>x>>y;
if(x==y)cout <<x*10 +5<<" "<<x*10 +6;
else if(y-x==1)cout <<x <<" "<<y;
else cout <<-1;
    return 0;
}