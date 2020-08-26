#include <iostream>
#include <map>
using namespace std;
bool isPrime (int x){
for (int i =2 ; i*i<=x;i++)
{
    if (x%i==0)return 0;
}
return 1;
}
int main(){
int n ;
cin >>n;
int l =1, r=n-2;
string arr[n] ;char z,x;
for (int i =0 ;  i<n ;i++)cin >>arr[i];
if(arr[0][0]==arr[0][1]){
    cout <<"NO\n";
    return 0;
}
for (int i =1 ;  i<n-1 ;i++){
if(i != n/2)
{
    swap(arr[i][0],arr[i][l]);
    swap(arr[i][n-1],arr[i][r]);
}
else {
    if(arr[i][0]==arr[i][n-1]){
    arr[i][0]=arr[i][n/2];
    swap(arr[i][n-1],arr[i][n/2]);
    }
    else {
        cout <<"NO\n";
        return 0;
    }
}
  l++;
    r--;
}
//cout <<"--------------------------------------------\n";
//for (int i =0 ;  i<n ;i++)cout <<arr[i]<<endl;
for (int i =0 ;  i<n-1 ;i++)
{
    if (arr[i]!=arr[i+1]){
        cout <<"NO\n";
        return 0;
    }
}
cout <<"YES\n";
return 0;
}