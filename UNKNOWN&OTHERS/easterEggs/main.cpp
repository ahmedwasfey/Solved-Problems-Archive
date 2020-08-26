#include <bits/stdc++.h>
using namespace std; 

#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
string s= "ROYGBIV";int n ;
cin >>n;
loop(n/7)cout<< s;
s="GBIV";
loop(n%7)cout <<s[(i%4)];
    return 0;
}