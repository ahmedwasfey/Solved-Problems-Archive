#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
 ll x,cnt=0;
 while (1)
 {
        cnt=0;
     cin>>x;
     if(x==0)break;
     for(int i =2;i*i<=x;i++){
            if(x%i==0){
               if(gcd(i,x/i)==1) {cout <<"gcd = 1 ";cnt++;}
                               cout <<i<<"  "<<x/i<<endl;

            }
     }
     cnt *=3;

 cout<<x<<" "<<cnt+2<<endl;
 }
 
 
 
    return 0;
}