#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
int n , k, x, y;ll sum=0;
 cin>>n>>k;
 loop(n){
     cin>>x>>y;
  sum+=y-x+1;
 }
if(sum%k==0){
    cout<<"0";
    return 0;
}
y=(sum/k)+1;
y*=k;
y=y-sum;
y>0 ? cout <<y : cout <<"-1";
    return 0;
}