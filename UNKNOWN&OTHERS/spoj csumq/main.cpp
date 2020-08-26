#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int main(){
 int n;cin>>n;
 int arr[100005]={},q,x,y;cin>>arr[0];
 loop(i,1,n){
cin>>arr[i];
arr[i]+=arr[i-1];
 }
 cin>>q;
 loop(i,0,q){
     cin>>x>>y;
     cout <<arr[y]-(x==0 ? 0 :arr[x-1])<<"\n";
}
 
    return 0;
}