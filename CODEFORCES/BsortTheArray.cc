#include <bits/stdc++.h>
using namespace std;
#define loop(v, st, en) for (int v = st; v < en; v++)
#define loopdec(v, st, en) for (int v = st; v > en; v--)
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll arra[n + 5], arrb[n + 5];
    loop(i, 0, n)
    {
        cin >> arra[i];
        arrb[i] = arra[i];
    }
    sort(arrb , arrb+n);
    int l =-1, r=-1;
    loop(i,0,n)if(arra[i]!=arrb[i]){
        l=i;
        break;
    }
    loopdec(i,n-1,-1)
        if(arra[i]!=arrb[i]){
        r=i;
        break;
    }
    
    if(l==-1&&r==-1)cout <<"yes\n1 1\n";
    else {
		reverse(arra + l, arra + r + 1);
		int ok = true;
		for (int i = 0; i < n; i++) {
			if (arra[i] != arrb[i]) {
				ok = false;
			}
		}
		if (ok) {
			cout << "yes" << endl;
			cout << l + 1 << " " << r + 1 << endl;
		} else {
			cout << "no" << endl;
		}
        }
            return 0;
}