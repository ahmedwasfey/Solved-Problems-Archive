#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
ll pwr(ll power){
    if(power==0)return 1;
    if(power==1)return 2;
    ll hlf =pwr(power/2);
    return (hlf*hlf)*(power&1 ? 2 : 1);
}
int main(){
 ll n , m,fr,sc,tmp;
 vector <ll> pisano;
 while (cin>>n>>m)
 {
 m=pwr(m);//cout<<m<<endl;
    fr=0,sc=1;
    pisano={0};
 loop(i,0,m*m){
     pisano.push_back(sc);
     tmp=sc;
     sc=(fr+sc)%m;
     fr=tmp;
    // cout <<fr<<"  "<<sc<<endl;
     if(fr==0&&sc==1)break;
 }pisano.pop_back();
 //loop(i,0,pisano.size())cout <<pisano[i]<<" ";
cout <<pisano[n%(pisano.size())]<<endl;  
 }
    return 0;
}