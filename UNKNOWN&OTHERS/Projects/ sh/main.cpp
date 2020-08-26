#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n , sum , res =0 ;
    cin>>n;
    string a ;

    for(int i=0;i<n;i++)
    {
        cin>>a; // 654 // 100

    for(int j=0;j<a.length();j++)
    {
       //cout<<a[j]<<endl;
            switch(a[j])
            {
                case '0': sum=6;break;
                case '1': sum=2;break;
                case '2': sum=5;break;
                case '3': sum=5;break;
                case '4': sum=4;break;
                case '5': sum=5;break;
                case '6': sum=6;break;
                case '7': sum=3;break;
                case '8': sum=7;break;
                case '9': sum=6;break;
            }
//cout<<sum<<endl;
        res += sum;
    }
        cout<<res<<endl;
        res = 0 ;
    }

    return 0;
}
