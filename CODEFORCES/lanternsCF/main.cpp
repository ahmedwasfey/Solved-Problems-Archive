#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=1;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
int n; ll lngth;cin >>n>>lngth;
double mxdiff=-1, arr[n+5]={};
loop(n+1)cin >>arr[i];
sort(arr,arr+n+1);
loop (n+2){
if (arr[i]-arr[i-1]>mxdiff)mxdiff=arr[i]-arr[i-1];
}
mxdiff/=2;
if(arr[1]-0>mxdiff)mxdiff=(arr[1]-0);
if(lngth-arr[n]>mxdiff)mxdiff=(lngth-arr[n]);
cout <<fixed<<mxdiff;
    return 0;
}