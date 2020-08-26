#include <iostream>
using namespace std;
int main(){
 long long x;
 cin>>x;
 if(x&1)cout <<x/2 -x<<endl;
 else cout <<x/2<<endl;
    return 0;
}