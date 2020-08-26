#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t1, t2, st, en, rslt;
    cin >> t1 >> t2 >> st >> en;
    if (st < en)
        rslt = (en - st - 1) * t1, rslt += (en - st) * 2 * t2;
    else
        rslt = (st - en + 1) * t1, rslt += (st - en) * 2 * t2;
    cout << rslt;
    return 0;
}