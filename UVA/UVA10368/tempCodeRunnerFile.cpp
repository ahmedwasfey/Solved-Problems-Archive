#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,e) for (int v=0;i<e;i++)
int euclid(int a, int b){
    if (b==0)
    return 0;
    return 1+euclid(b,a%b);
}
int main(){
int x, y;
while (1)
{
cin>>x>>y;if(x+y==0)break;
if (y>x)swap(x,y);
if(euclid(x,y)&1)cout <<"Stan wins\n";
else cout <<"Ollie wins\n";
}
    return 0;
}