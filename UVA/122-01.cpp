// Auther : Ahmed Wasfey  date: 2020-04-21
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x << " = { " << x << " }\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
struct node
{
    int val, level, nl;
    node(int v, string s)
    {
        val = v;
        level = s.size();
        nl = 0;
        loop(i, 0, s.size())
        {
            if (s[i] == 'L')
                nl += (level - i);
            if (s[i] == 'R')
                nl -= (level - i);
        }
    }
    bool operator<(node &n) const
    {
        if (n.level != level)
            return level < n.level;
        return nl > n.nl;
    }
};

int main()
{

    freopen("input.txt", "r", stdin);
    int n, turn = -1, level[10] = {};
    string s, s0, s1;
    vector<node> v;

    while (cin >> s)
    {  P(s);
        if (s == "()")
        {  bool xx=0;
            sort(v.begin(), v.end());
            loop(i, 0, v.size())
                P(v[i].level),level[v[i].level]++;
            int mlev = v[v.size() - 1].level;
            loop(i, 1, mlev)
            {   P(i),P(level[i]);
                if (level[i] != (int)pow(2, i-1))
                {
                   xx=1;
                    break;
                }
            }
          //  if(!xx){
            loop(i, 0, v.size()) P(v[i].val);
            cout << "----\n";
            v.clear();
            clr(level, 0);
            continue;
           // }
        }
        s0 = s1 = "";
        loop(i, 0, s.size())
        {
            if (s[i] == '(')
                turn = 0;
            else if (s[i] == ',')
                turn = 1;
            else
            {
                if (turn == 0)
                    s0.push_back(s[i]);
                else if (turn == 1)
                    s1.push_back(s[i]);
            }
        }
        v.push_back(node(stoi(s0), s1));
    }
    return 0;
}