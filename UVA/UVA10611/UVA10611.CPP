#include <bits/stdc++.h>
using namespace std; 

#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
int n , q; ll arrt[50005],query;

void doTheJob(ll x){
    int st=0,en=n-1,mid;
    while (st<en)
    {
    
            mid=(st+en+1)/2;
            cout <<mid<<endl;
            if(arrt[mid]>=x)en=mid-1;
            else st=mid;
    }
    cout <<arrt[en]<<" ";
    if(en+1<n&&arrt[en+1]>x)cout<<arrt[en+1]<<endl;
    else if(en+2<n)cout <<arrt[en+2]<<endl;
    else cout <<"X\n";
    
    }
int main(){ 

cin>>n;loop(n)cin>>arrt[i];
cin>>q;
loop(q){
    cin>>query;
    if(query>arrt[n-1])cout <<arrt[n-1]<<" "<<"X\n";
    else if(query==arrt[n-1])cout <<arrt[n-2]<<" "<<"X\n";
    else if (query<arrt[0])cout <<"X "<<arrt[0]<<"\n";
    else if (query==arrt[0])cout <<"X "<<arrt[1]<<"\n";
    else doTheJob(query);
}
    return 0;
}