#include <bits/stdc++.h>

using namespace std;

int main()
{

long long x,y,z;
while(1){
cin>>x>>y>>z;
if (x+y+z == 0)break ;
x/=8;
y/=8;
x=x*y;
if (z==0)x--;
cout <<x<<"\n";
}


    return 0;
}
