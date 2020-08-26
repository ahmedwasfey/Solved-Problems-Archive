#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define ll long long

int main()
{

    map<char, vector<pair<int, int>>> cmap;
    map<char, int> near;
    vector<pair<int, int>> svec;
    int n, m, x, q, cnt = 0, farr[30] = {};
    double disx, disy, dist;
    string s;
    cin >> n >> m >> x;
    loop(i, 0, n)
    {
        cin >> s;
        loop(j, 0, m)
        {
            if (s[j] == 'S')
            {
                svec.push_back(make_pair(i, j));
            }
            else
            {
                farr[s[j] - 'a']++;
                cmap[s[j]].push_back(make_pair(i, j));
            }
        }
    }
    bool enshift = (svec.size() > 0), away = 1;
    cin >> q >> s;
    char cs;
    loop(i, 0, q)
    {
        away = 1;
        if (isupper(s[i]))
        {
            cs = tolower(s[i]);
            if (!enshift || farr[(cs - 'a')] == 0)
            {
                cout << "-1";
                return 0;
            }
            else
            {
                if (near[cs] == 1)
                    away = 0;
                else if (near[cs] == -1)
                    away = 1;
                else
                {   near[cs] = -1;
                    loop(j, 0, svec.size())
                    {
                        loop(z, 0, cmap[cs].size())
                        {
                            disx = (svec[j].first - cmap[cs][z].first);
                            disx *= disx;
                            disy = (svec[j].second - cmap[cs][z].second);
                            disy *= disy;
                            dist = sqrt(disx + disy);
                            //cout <<s[i]<<"  "<<dist<<"  d\n";
                            if (dist <= x)
                            {
                                away = 0;
                                near[cs] = 1;
                                break;
                            }
                        }
                    }
                }
                if (away)
                    cnt++;
            }
        }
        else
        {
            if (farr[s[i] - 'a'] == 0)
            {
                cout << "-1";
                return 0;
            }
        }
    }
    cout << cnt;
    return 0;
}