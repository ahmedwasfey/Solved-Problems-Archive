#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long

int main()
{
int n, x; cin>>n>>x;
ll rslt=0,arr[n];
loop(i,0,n)cin>>arr[i];
sort(arr,arr+n);
//reverse(arr,arr+n);
loop(i,0,n){
rslt+=(arr[i]*(x>i ? (x-i) :1));
//cout <<rslt<<endl;
}
cout <<rslt;
    return 0;
}