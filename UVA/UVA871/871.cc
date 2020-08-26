#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(v, strt, end) for (int v = strt; v < end; v++)

vector<string> adj;
int szy, cnt;
bool valid(int x, int y)
{
    return (x >= 0 && x < adj[0].size() && y >= 0 && y < szy);
}
int connected(int i, int j)
{          //cout <<"I: "<<i<<" J : "<<j <<"  "<<valid(i,j)<<"   "<<adj[i][j]<<endl;
    if (valid(i, j) && adj[i][j] == '1')
    {
        adj[i][j] = 0;
      //  cout <<"I: "<<i<<" J : "<<j <<endl;
    return  1+  connected(i + 1, j)
    +    connected(i, j + 1)
    +    connected(i, j - 1)
    +    connected(i - 1, j)
    +    connected(i + 1, j + 1)
    +    connected(i - 1, j - 1)
    +    connected(i - 1, j + 1)
    +    connected(i + 1, j - 1);
    }
   else  return 0;
}
int main()
{
    int n;
    scanf("%i\n" , &n);
    string s;
    loop(i, 0, n)
    { 
        adj.clear();
        szy = 0, cnt = -1;
        while (1)
        {
            getline(cin, s);
            if (s == "")
                break;
            else
            {
                szy++;
                adj.push_back(s);
            }
        }
        loop(h,0,adj[0].size())loop(v,0,szy){
          
            cnt =max(cnt ,connected(h,v));
        }
        cout <<cnt<<"\n" ;
         if (i <n-1)cout <<'\n';
    }

    return 0;
}