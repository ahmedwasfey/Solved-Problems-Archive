#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long

int main()
{
    int n, f;
    cin >> n >> f;
    pair<int, pair<int, int>> arr[n];

    loop(i, 0, n)
    {
        cin >> arr[i].second.first >> arr[i].second.second;
        arr[i].first = min(2 * arr[i].second.first, arr[i].second.second)-min( arr[i].second.first, arr[i].second.second);
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    ll rslt = 0;
    loop(i, 0, n)
    {
        if (i < f)
        {
            rslt += min(2 * arr[i].second.first, arr[i].second.second);
        }
        else
        {
            rslt += min( arr[i].second.first, arr[i].second.second);
        }
    }
    cout << rslt;

    return 0;
}