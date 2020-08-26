#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
   int n ;
   cin>>n;
   string s;
   cin >>s;
   ll arr[n],res=-1,minres=10000000000;
   loop(n)cin>>arr[i];
   loop(n-1){
       if(s[i]=='R'&&s[i+1]=='L'){
           res=arr[i+1]-arr[i];
           if(res<minres)minres=res;
       }
   }
   if(res==-1)cout <<"-1";
   else cout <<minres/2;
    return 0;
}