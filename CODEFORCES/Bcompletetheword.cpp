// Auther : Ahmed Wasfey  date: 2020-04-28
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
typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;

string s;
int n, farr[27], cnt;
void fillall()
{
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            s[i] = 'A';
    }
}
void fillsub(int st)
{
    loop(i, st, st + 26) if (s[i] == '?')
    {
        loop(j, 0, 26) if (farr[j] == 0)
        {
            s[i] = (j + 'A');
            farr[j]++;
            break;
        }
    }
}
bool nice()
{
    loop(i, 0, 26) if (farr[i] > 1) return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    cin >> s;
    n = s.size();
    if (n < 26)
    {
        cout << "-1";
        return 0;
    }
    //  bool nice = 1;
    // P(n);
    clr(farr, 0);
    loop(i, 0, 26) if (s[i] != '?')
    {
        farr[s[i] - 'A']++;
    }
    loop(i, 25, n)
    {
        if (nice())
        {
            fillsub(i - 25);
            fillall();
            cout << s;
            return 0;
        }
        if (i < n - 1)
        {
            if (s[i + 1] != '?')
                farr[s[i + 1] - 'A']++;
            if (s[i - 25] != '?')
                farr[s[i - 25] - 'A']--;
        }
    }
    cout << -1;
    return 0;
}