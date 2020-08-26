#include <bits/stdc++.h>

using namespace std;
long long arr[100005],arr2[100005],n,s, Result=0;



void getResult(int index){
Result=0;
for (long long i=1;i<=n;i++){
arr2[i]=(arr[i]+i*index);
}
sort(arr2,arr2+n+1);
for (long long i=1;i<=index;i++)
Result+=arr2[i];

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

cin>>n>>s;
for (long long i=1;i<=n;i++)cin>>arr[i];
long long mid, lo=0,hi=n;
    while(lo<hi){
    mid=lo+hi+1;
    mid=mid>>1;
    //cout<<mid<<endl;
    getResult(mid);
    if(Result>s)hi=mid-1;
    else if(Result<s)lo=mid;
    else break;

    }
    long long num =min(mid,hi);
    if (num ==0||Result==0){
    cout<<0<<" "<<0;
    return 0;
    }
    getResult(num);
    cout<<num<<" "<<Result;

    return 0;
    }
