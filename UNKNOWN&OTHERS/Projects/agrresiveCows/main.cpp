#include <bits/stdc++.h>

using namespace std;
long long k, n ,c,arr[100010],mx=0;
bool isvalid(long long d){
   k=1;
   int last=arr[0];
   for (int i=1;i<n;i++){
    if(arr[i]-last>=d){
        k++;
        last=arr[i];
    }
   // cout<<k<<" k ";
    if (k>=c)return true;
   }
return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    cin>>n>>c;
    for (int i=0;i<n;i++){
            cin>>arr[i];
    if (arr[i]>mx)mx=arr[i];
    }
    sort(arr, arr+n);
   // cout<<mx<<endl;
    long long mid, lo=0,hi=mx+7;
    mx=0;

while (lo<hi){
    mid=(lo+hi)/2;
    //cout<<lo<<" "<<mid<<" "<<hi<<"  M"<<endl;
   // cout<<"\n res is "<<isvalid(mid)<<endl;
     if (isvalid(mid))
        lo=mid;
     else hi=mid-1;

}
if (isvalid(hi)) cout<<hi<<endl;
		else cout<<lo<<endl;
   }
  return 0;
}
