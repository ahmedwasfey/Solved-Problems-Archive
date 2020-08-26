#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int fun(int n ){
    //cout <<n;
    if(n<10)return 0;
    int sum=0;
    while(n>0){
            sum+=n%10;
            n/=10;
    }
    return 1+fun(sum);
}
int main(){
string s;cin>>s;
int sz= s.size(), num=0,cnt =0; 
loop(sz){
num+=s[i]-'0';
cnt=1;
}
    cout <<fun(num)+(sz >1);
    return 0;
}