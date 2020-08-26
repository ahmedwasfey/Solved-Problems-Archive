#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long

int main()
{
int n ;cin >>n;
ll arr[n];
loop(i,0,n)cin>>arr[i];
sort(arr,arr+n);
loop(i,2,n)
if(arr[i-2]+arr[i-1]>arr[i]){
    cout <<"YES\n";
    return 0;
}
cout <<"NO\n";
    return 0;
}