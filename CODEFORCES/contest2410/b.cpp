#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
const int mx =20e5;
int main(){
int t; cin>>t; 
while (t--)
{
    int n, k, d,arr[mx],st,en,cr,mxcnt=-1;
    cin>>n>>k >>d;
    if(d==n){
        cout <<k<<endl;
        continue;
    }
    if(d==1){
        cout <<"1\n";
        continue;
    }
    loop(i,0,n)cin>>arr[i];
    loop(i,0,n){
        int cnt =1;
            loop(j,i,n){
                if(arr[j]==arr[j+1]){cnt++;en =j;}
                else
                {   en =j;
                     break;
                }
    }
     if(cnt >mxcnt){
                    mxcnt=cnt;
                    st=i;
                }
                cout <<i<<"   "<<st<<"  "<<en<<"  "<<mxcnt<<endl ;
                i=en;
}

}

    return 0;
}