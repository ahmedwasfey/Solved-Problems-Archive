#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int main(){
int q,n; cin>>q;pair<ll,ll> arr[100005];
ll s, l[100005],r[100005];
loop(z,0,q){
  cin>>n>>s;
  loop(i,0,n)cin>>arr[i].first>>arr[i].second;
  sort(arr,arr+n);
  ll x=n/2,v1=0,v2=arr[x+1].second;cout <<"VVVV22  "<<v2<<endl;
    loop(i,0,x){
        v1+=arr[i].first;
        if(arr[n-i-1].second<v2)v2=arr[n-i-1].second;

    }
    cout <<min(v2,(s-v1)/(x+1))<<endl;

}




    return 0;
}