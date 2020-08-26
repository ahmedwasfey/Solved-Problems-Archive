#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
string s1,s2,s3="";
void fun(){
    int x,sm,crry=0;
    loop(i,0,s1.size()){
       x= (s1[i]-'0') +(s2[i]-'0')+crry;
        sm= x%10;
        crry=x/10;
        s3.push_back('0'+sm);
    }
    if(crry>0)s3.push_back('0'+crry);
}
int main(){
    int n ;cin>>n;
    loop(i,0,n){
cin>>s1>>s2;
if(s1.size()<s2.size())swap(s1,s2);
loop(i,0,s1.size()-s2.size())s2.append("0");
 //reverse(s1.begin(),s1.end());
   //reverse(s2.begin(),s2.end());
   fun();
   //int y;
    while (s3[0]=='0')
    {   //cout<<s3<<endl;
        s3.erase(0,1);
       // cin>>y;if(y==0)break;
    }
    
   cout <<s3<<endl;
   s3="";
    }
   
    return 0;
}