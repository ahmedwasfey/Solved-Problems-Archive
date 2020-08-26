#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
    int n ,farr[1100]={0},x;
    cin >>n;
    loop(n){
        cin >>x;
        farr[x-1]++;
    }    
    x=*max_element(farr,farr+1100);
    cout<<x;
    if(x>(n/2)+(n&1))cout<<"NO\n";
    else cout <<"YES\n";
    return 0;
}