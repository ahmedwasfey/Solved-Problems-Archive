#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(v, strt, end) for (int v = strt; v < end; v++)
int main()
{
    int n, z, tst = 1, x, y, idx, hls;
    cin >> n;
    string s;
    pair<int, int> co[1008];
    loop(i, 0, n)
    {
        cin >> z;
        tst = 1;
        s = "";
        x = 0, y = 0;
        hls = 0;
        idx = 0;

        loop(j, 0, z)
        {
            cin >> co[j].first >> co[j].second;
        }
        sort(co, co + z);
        loop(j, 0, z - 1)
        {
            if (co[j].second > co[j + 1].second)
            {
                tst = 0;
                cout << "NO\n";
                break;
            }
        }
        if (tst == 0)
            continue;
        while (idx <= z - 1 && (x != co[z - 1].first || y != co[z - 1].second))
        {
            if (x < co[idx].first)
            {
                x++;
                s.push_back('R');
            }
            else if (y < co[idx].second)
            {
                y++;
                s.push_back('U');
            }
            else
                idx++;
        }
        cout << "YES\n"
             << s << endl;
    }

    return 0;
}