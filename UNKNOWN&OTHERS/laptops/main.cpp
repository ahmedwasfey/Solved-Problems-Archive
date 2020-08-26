#include <bits/stdc++.h>
using namespace std; 

#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int main(){
int n ; 
cin>>n;
pair <int ,int > lap[n];
loop(n){
    cin>>lap[i].first>>lap[i].second;
}
sort(lap,lap+n);
loop (n-1){
 if(lap[i].second>lap[i+1].second){
     cout <<"Happy Alex\n";
     return 0;
 }
}
    cout <<"Poor Alex";
    return 0;
}