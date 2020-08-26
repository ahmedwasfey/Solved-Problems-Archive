#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
int n ;cin>>n;int arr[n+5],x,q;ll ves=0,pet=0;
loop(n){
    cin >>x;
    arr[x]=i+1;
}
cin >>x;
loop(x){
cin>>q;
ves+=arr[q];
pet+=(n-arr[q])+1;
}
cout <<ves<<" "<<pet<<endl;
    return 0;
}