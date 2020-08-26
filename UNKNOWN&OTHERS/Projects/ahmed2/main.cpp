#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,cntcl=0,cntacr=0,cntboth=0,cnt=0;
    vector <int> vec1,vec2,vec3,vec4;
    string s1,s2;
    cin>>n>>s1>>s2;
    for (int i=0;i<n;i++){
    if(s1[i]=='1'&&s2[i]=='0'){
            cntcl++;
            vec1.push_back(i);
        }
     else if(s1[i]=='0'&&s2[i]=='1'){
            cntacr++;
            vec2.push_back(i);
        }
    }
 for (int i=0;i<n;i++){

     if(s1[i]=='1'&&s2[i]=='1'){
            if ()

     }



 }

    n=n/2;
// cout<<cnt1<<" "<<cnt2<<endl;
 /*if (cnt1>n||cnt2>n)
    {
        cout<<-1;
 return 0;
 }
 else {
     cnt=cntboth/2;
     if (cntboth&1==1){
        cnt++;
        cntacr--;
     }
      for (int i=0;i<cnt;i++){
        cout<<vec3[i]+1<<" ";
    }
    cnt=min(cnt1cl,cntacr);
    for (int i=0;i<cnt;i++){
        cout<<vec1[i]+1<<" ";
    }
int cnt3=cnt2-cnt;
cnt+=cnt3;
 for (int i=0;i<cnt3;i++){
        cout<<vec2[i]+1<<" ";
    }
    //cout<<"\n"<<cnt<<'\n';
 for (int i=cnt;i<n;i++){
        cout<<vec3[i]+1<<" ";
    }
 }
*/
  return 0;
}
