#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
int n ,cnt=0,comp=0,arr[60];
int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
while (1)
{
    cin>>n;cnt=0;comp=0;
    if(n<=1)break;
    loop(i,0,n)cin>>arr[i];
    loop(i,0,n-1){
        loop(j,i+1,n){
            comp++;
                if(gcd(arr[i],arr[j])==1){
                     cnt++;
        }
    }
    }
    if(cnt==0)cout<<"No estimate for this data set.\n";
    else cout <<fixed <<setprecision(6)<<sqrt((double)comp*6/cnt)<<endl; 
}

    return 0;
}