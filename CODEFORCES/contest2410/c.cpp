#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int main(){
int q;cin>>q;
string s,sz,sf;
loop(i,0,q){
 cin>>s;
 sz="",sf="";
 loop(j,0,s.size()){
     int x=s[j]-'0';
     if(x&1)sf.push_back(s[j]);
     else
     {
         sz.push_back(s[j]);
     }
 }
 int e=0,o=0;
 while (e<sz.size()||o<sf.size())
 { 
      if(o<sf.size()&&e>=sz.size()){
         cout <<sf[o];
         o++;
      }
    else if(e<sz.size()&&o>=sf.size()){
         cout <<sz[e];
         e++;
     }
     else if((e<sz.size()&&o>=sf.size())||sz[e]<sf[o]){
         cout <<sz[e];
         e++;
     }
     else  {
         cout <<sf[o];
         o++;
     }
 }
 
 cout<<endl; 
}

    return 0;
}