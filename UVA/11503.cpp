// Auther : Ahmed Wasfey  date: 2020-04-14
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
map<string , bool > fr;
struct DisjSet
{
    map<string, string> parent;
    map<string, int> rank;

    string findSetParent(string i)
    {
        if (parent[i] == i)
            return i;
        return parent[i] = findSetParent(parent[i]);
    }
    void Union(string x, string y)
    {
        x = findSetParent(x);
        y = findSetParent(y);
        if (x == y)
            return;

        parent[y] = x;
        rank[x] += rank[y];
    }
    bool connected(string x, string y)
    {
        x = findSetParent(x);
        y = findSetParent(y);
        if (x == y)
            return true;
        return false;
    }
    void clear (){
        parent.clear();
        rank.clear();
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t , n ; cin>>t; string s0 ,s1;
    DisjSet ds ;
    while (t--)
    {   fr.clear();
        ds.clear();
        cin>>n;
        loop(i,0,n){
            cin>>s0>>s1;
            if(ds.findSetParent(s0)=="")ds.parent[s0]=s0,ds.rank[s0]=1;
            if(ds.findSetParent(s1)=="")ds.parent[s1]=s1,ds.rank[s1]=1;
            ds.Union(s0,s1);
            cout<<ds.rank[ ds.findSetParent(s1) ]<<endl;
        }
    }
    

    return 0;
}