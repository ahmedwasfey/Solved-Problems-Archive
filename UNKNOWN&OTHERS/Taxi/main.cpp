#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int main(){
    int a, b,c,d,dif;
    cin>>a>>b>>c>>d;
    if(a>=c)
    {cout <<a;return 0;}
    dif=c-a;
    int x=dif/(b+d);
    int dist=c-a-(x*(d+b));
    cout <<a+x*b+(b>dist ? dist : b);
        return 0;
}