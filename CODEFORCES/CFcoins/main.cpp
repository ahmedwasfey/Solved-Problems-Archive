#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(e) for (int i=0;i<e;i++)
#define loop2(e) for (int j=0;j<e;j++)
void showdq(deque <char> g) 
{ 
    deque <char> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << *it; 
    cout << '\n'; 
} 
int main(){
string s;int farrf[5]={},farrl[5]={};

loop(3){
    cin >>s;
    if(s[1]=='<'){
       reverse(s.begin(),s.end());
    }
     farrf[s[0]-'A']++;
    farrl[s[2]-'A']++;
}
s.erase();
loop(3) if(farrl[i]>1)s.push_back('A'+i);
if(s.empty()){
    cout <<"Impossible\n";
    return 0;
}
loop(3) if(farrl[i]==1)s.push_back('A'+i);
loop(3)  if(farrf[i]>1)s.push_back('A'+i);
cout <<s<<endl;
    return 0;
}