#include <iostream>

using namespace std;
bool test(int v11,int v20){
if(v20>=v11)return 0;
else return 1;
}
int main()
{
int n , xll,yll,xur,yur,xll0,yll0,xur0,yur0; bool resltx, reslty;

cin>>n;
//cout<<n;
while(n--)
{
 cin>>xll>>yll>>xur>>yur>>xll0>>yll0>>xur0>>yur0;
 if(xll0>xll) resltx= test(xur,xll0);
 else resltx = test(xur0,xll);
 if(resltx){

     if(yll0>yll)reslty=test(yur,yll0);
     else reslty = test(yur0,yll);
     if(reslty){
         cout<<max(xll,xll0)<<" "<<max(yll,yll0)<<" "<<min(xur,xur0)<<" "<<min(yur,yur0)<<"\n";
               if(n>0) cout <<"\n";        
         continue;
     }
 }
      cout<<"No Overlap\n";
      if(n>0) cout <<"\n";        
}

    return 0;
}
