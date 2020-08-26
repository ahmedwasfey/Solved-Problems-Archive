#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
int n ,current=0,next,diff=0,energy=0,rslt=0;cin>>n;
loop(n){
    cin >>next;
    diff=current-next;
    if(diff+energy<0){
        rslt-=diff+energy;
        energy=0;
    }
    else {
        energy+=diff;
    }
    current=next;
}
cout <<rslt;
    return 0;
}