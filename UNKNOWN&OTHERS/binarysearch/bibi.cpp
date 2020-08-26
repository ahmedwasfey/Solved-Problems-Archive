#include <bits/stdc++.h>
using namespace std; 
int main(){
    long long n ,k, sumall;
    cin >>n>>k;
    sumall= k*(k-1)/2+1;
    if (n==1)cout <<"0";
    else if (n > sumall)cout <<"-1";
    else if(n== sumall)cout <<k-1;
    else {
        n--;
        long long mid, tst ,sumsub,st=0 , end =k-1;
        while (st<end){
                mid =(st+end+1)/2;
                sumsub=mid*(mid+1)/2;
                tst=sumall-sumsub;
                if (n >=tst){end=mid-1;}
                else if(n<tst){st =mid;}
        }     
         cout <<k-end-1;


    }
    return 0;
}