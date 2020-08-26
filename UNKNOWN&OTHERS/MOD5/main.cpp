#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(s,e) for (int i=s;i<e;i++)
#define loop2(s,e) for (int j=s;j<e;j++)
int main(){
ll x, y,arrx[9]={},arry[9]={} ;
cin>>x>>y;
loop(1,x+1)
    arrx[i%5]++;
loop(1,y+1)arry[i%5]++;
cout <<arrx[0]*arry[0]+arrx[1]*arry[4]+arrx[4]*arry[1]+arrx[2]*arry[3]+arrx[3]*arry[2];
    return 0;
}