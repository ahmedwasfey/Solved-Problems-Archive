// Auther : asmaa saeed date: 2020-07-08

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

vector<string> v;

int n, m;

int r[] = {0, 0, 1, -1};

int c[] = {1, -1, 0, 0};

int distances[190][190] = {0};

int multiSourceBfs()

{

    bool vstd[190][190] = {0};

    queue<pair<int, int>> q;

    loop(i, 0, n)

    {

        loop(j, 0, m)

        {

            if (v[i][j] == '1')

            {

                q.push(MP(i, j));

                vstd[i][j] = true;
            }
        }
    }

    while (!q.empty())

    {

        pair<int, int> cur;

        cur = q.front();

        q.pop();

        loop(i, 0, 4)

        {

            int nRow = cur.first + r[i], nCol = cur.second + c[i];

            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vstd[nRow][nCol] && distances[nRow][nCol] == 0)

            {

                distances[nRow][nCol] = distances[cur.first][cur.second] + 1;

                q.push(MP(nRow, nCol));

                vstd[nRow][nCol] = true;
            }
        }
    }

    return 0;
}

void clearing()

{

    v.clear();

    memset(distances, 0, sizeof(distances));
}

int main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin >> t;

    while (t--)

    {

        cin >> n >> m;

        string s;

        clearing();

        loop(i, 0, n)

        {

            cin >> s;

            v.pb(s);
        }

        multiSourceBfs();

        loop(i, 0, n)

        {

            loop(j, 0, m)

            {

                cout << distances[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
