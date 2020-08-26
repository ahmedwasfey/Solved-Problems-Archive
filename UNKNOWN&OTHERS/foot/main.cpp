#include <bits/stdc++.h>
using namespace std; 

#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
 int n ,tstrl1=0,tstIfDotAfterRL=0,tstdot2=0; string s;
cin>>n>>s;
loop(n){
if(s[i]!='.'){
    if(tstrl1==0)tstrl1=1;
    if(tstIfDotAfterRL==1)return puts()
}
else{ 
    if(tstrl1==1)tstIfDotAfterRL=1;
}
}

cout <<tstrl1<<" "<<tstIfDotAfterRL;
    return 0;
}