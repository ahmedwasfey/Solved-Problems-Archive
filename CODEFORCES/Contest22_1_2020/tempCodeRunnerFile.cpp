#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
ll cnt =1,rslt;ll arr[5];
bool pos( ll n ){
    if (cnt ==3)return true ;
    for (ll i =2 ; i *i < n ;i++){
            if (n%i ==0){
                if (cnt==1)rslt =i;
                else {
                 if (i!=rslt)   cout <<"YES\n"<<rslt<<" "<<i<<" "<<n/i<<endl;
                 else continue;
                }
                cnt ++;
                return pos(n/i);
            }
    }
    return false ;
}
int main(){
int n ; cin >>n;
loop(i ,0 ,n ){
    cnt =1;
    ll z ; cin >>z;
   if (!pos(z))cout <<"NO\n";
}
    return 0;
}