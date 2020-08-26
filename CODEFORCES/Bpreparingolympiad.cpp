// Auther : Ahmed Wasfey  date: 2020-05-05 
#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define INF 1E9
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define MP make_pair
#define P(x) cout << #x  <<" = { "<< x<<" }\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;

int n,l,r,x,arr[20];
int dp(int idx , vi prob){
   if(idx==n){
       if (prob.size()<2)return 0;
       sort(prob.begin(),prob.end());
       int ssum= accumulate(prob.begin(),prob.end(),0);
       if(prob[prob.size()-1]-prob[0]<x)return 0;
       if(ssum<l ||ssum>r)return 0;
       return 1;
   }
   int sol =0;
   sol+=dp(idx+1,prob);
   prob.push_back(arr[idx]);
   sol+=dp(idx+1,prob);
   return sol;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    cin>>n>>l>>r>>x;
    loop(i,0,n)cin>>arr[i];
    vi ss(0);
    cout<<dp(0,ss);
    return 0;
}