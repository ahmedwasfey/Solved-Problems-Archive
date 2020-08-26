#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int fun(string s)
{
    int cnt = 0;
    loop(i, 0, s.size()) 
    {if (s[i] == '+') cnt++;
    else cnt--;
    }
    return cnt ;
}

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2;
    vector <double > rslts ;
    queue<string> q;
    q.push(s2);
    while (!q.empty())
    {
        string u = q.front();
        q.pop();
        size_t f = u.find("?");
        if (f== string :: npos){
                rslts.push_back((double)fun(u));
        }
        else {
            u[f]='+';
            q.push(u);
            u[f]='-';
            q.push(u);
        }
    }
    double otpt=((double)count(rslts.begin(),rslts.end(),(double)fun(s1)))
    /(double)rslts.size();
    cout <<fixed <<setprecision(9)<<otpt<<endl;
    return 0;
}