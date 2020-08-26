#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
map<int, vi> wst;
string arr[]={"Carrots\n","Kiwis\n","Grapes\n"};
int main()
{
    int n, m, k, t,rslt;
    cin >> n >> m >> k >> t;
    int x, y;
    loop(i, 0, k)
    {
        scanf("%i %i", &x, &y);
        wst[x].push_back(y);
    }
    int sarr[n]={};
    loop(i,1,n+1){
        sarr[i]=sarr[i-1]+wst[i-1].size();
    }
   loop(i,1,n+1)sort(wst[i].begin(),wst[i].end());
   bool iswst ;
    loop(i, 0, t)
    {
        iswst=0;
        rslt=0;
        scanf("%i %i", &x, &y);
        rslt+=sarr[x];
        loop(j,0,wst[x].size()){
            if(wst[x][j]<y)rslt++;
            else if(wst[x][j]==y){
                iswst=1;
                break;
            }
            else break ;
        }
        if(iswst)printf("Waste\n");
        else
        {
            int hh =(m*(x-1))+y-rslt-1;
            //cout <<hh<<endl;
            cout <<arr[(hh%3)];
        }
        
    }

    return 0;
}