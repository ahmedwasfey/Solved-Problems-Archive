#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
string arr[5]; char t;
bool valid(int r, int c){
    if(r>=0&&r<=3&&c>=0&&c<=3){
        if(arr[r][c]==t)return 1;    }
    return 0;
}
bool checkSquare(int r, int c){
    int cnt=0;
    //check upper left 
        if(valid(r,c+1))cnt++;
        if(valid(r+1,c+1))cnt++;
        if(valid(r+1,c))cnt++;
        if(cnt>=2)return 1;else cnt=0;
    //check upper right 
         if(valid(r,c-1))cnt++;
         if(valid(r+1,c-1))cnt++;
         if(valid(r+1,c))cnt++;
         if(cnt>=2)return 1;else cnt=0;
    // check lower left 
            if(valid(r-1,c))cnt++;
            if(valid(r-1,c+1))cnt++;
            if(valid(r,c+1))cnt++;
            if(cnt>=2)return 1;else cnt=0;
    //check lower right 
           if(valid(r-1,c-1))cnt++;
           if(valid(r-1,c))cnt++;
           if(valid(r,c-1))cnt++;
          if(cnt>=2)return 1;else cnt=0;

    return 0;
}
int main(){
    loop(4)cin>>arr[i];
    loop(4){
        loop2(4){
               if(arr[i][j]=='#')t='#';
               else t='.';
               if(checkSquare(i,j)){
                   cout<<"YES\n";
                   return 0;
               
               }
        }
    }
    cout <<"NO\n";
    return 0;
}