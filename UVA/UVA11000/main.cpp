#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int main(){
 ll ft=1,st=2,temp;
 int n ;
 while (1)
 {   ft=0,st=1;
     cin>>n;
     if(n==-1)break;
     
     loop(i,0,n){
         temp=st;
         st=(ft+st+1);
         ft=temp;
     }
     cout <<ft<<" "<<st<<endl;
 }
  
    return 0;
}