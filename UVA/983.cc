#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long
int n, k, rr;
int arr[1005][1005], s[1005][1005];
int suuum(int x, int y)
{
    return s[x][y] - s[x - k][y] - s[x][y - k] + s[x - k][y - k];
}
int main()
{
    bool fl = 0;
    while (cin >> n >> k)
    {
        if (fl)
            cout << '\n';
        rr = 0;
        fl = 1;
        loop(i, 1, n + 1) loop(j, 1, n + 1) cin >> arr[i][j];
        loop(i, 1, n + 1) loop(j, 1, n + 1) s[i][j] = arr[i][j] + s[i][j - 1];
        loop(i, 1, n + 1) loop(j, 1, n + 1) s[j][i] += s[j - 1][i];
        loop(i, k, n + 1)
        {
            loop(j, k, n + 1)
            {
                rr += suuum(i, j);
                cout << suuum(i, j) << "\n";
            }
        }
        cout << rr << endl;
    }

    return 0;
}