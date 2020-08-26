#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long arr[7],result=0;
vector <long long> vec ;
 long long gcd (long long a, long long b){
 if (b==0)return a ;
 return gcd(b,a%b);

 }
long long least_common_multiple()
{
    long long mx=-1,mx1,sz=vec.size();
    for (int i=1; i<sz ;i++){
    mx=vec[i]*vec[i-1];
    vec[i]=mx/gcd(vec[i],vec[i-1]);
    }
    return vec[sz-1];
    }

long long num_of_devisors(long long x)
{
    result =0;
    for (int i=0 ; i<2; i++)
        for (int i1=0 ; i1<2; i1++)
            for (int i2=0 ; i2<2; i2++)
                for (int i3=0 ; i3<2; i3++)
                    
                    {
                        int elemntsCount=0;
                        vec.clear();
                        if(i) vec.push_back(arr[0]), ++elemntsCount;
                        if(i1)vec.push_back(arr[1]), ++elemntsCount;
                        if(i2)vec.push_back(arr[2]), ++elemntsCount;
                        if(i3)vec.push_back(arr[3]), ++elemntsCount;
                       
                        if (elemntsCount ==0)continue ;
                        else
                        {

                            long long lcm = least_common_multiple();
                            long long sign = (elemntsCount %2 ==0) ? -1 : 1 ;
                            cout <<x/lcm <<endl;
                            result += sign*(x / lcm);
                        }
                    }

    return result ;
}
int main()
{
    int t;
    cin>>t;
    long long n,m, a, d,x,y;
    while (t--)
    {
        cin>>n>>m;
        for (int i =0; i <4 ; i++)cin>>arr[i];
        long long xx =num_of_devisors(n-1) ;
        //cout <<xx<<"  "<<yy<<endl;
        //x=n-1-xx;
        //y=m-yy;
        cout<<(n-xx)<<'\n';
    }
    return 0;
}
