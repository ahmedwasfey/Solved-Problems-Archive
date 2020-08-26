#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n ,q,arrn[5005]={},arrl[5005],arr[5005],mx=0;
     cin>>n>>q;
     for (int i =0; i<n;i++){
        cin>>arrl[i]>>arr[i];
        for (int j=arrl[i];i<=arr[i];i++)arrn[j]++;
     }
      for (int i =0; i<n;i++){
        for (int j =i;i<n;j++)
        cout <<1;
      }
  return 0;
}
