#include<bits/stdc++.h>
using namespace std;
int n,i,a,a1,c,c1,u,u1,h,s,t,o;
string C,A;
int main(){
	cin>>n>>C>>A;
	for(i=0;i<n;i++)s=C[i]&1,t=A[i]&1,s&&t?u++:s?c++:t?a++:0;
	for(c1=0;c1<=c;c1++)for(a1=0;a1<=a;a1++){
		u1=(a-a1-c1+u)/2;
		h=c1+a1+u1;
		if(u1>=0&&u1<=u&&c1+u1==a-a1+u-u1&&h<=n/2&&c-c1+a-a1+u-u1<=n/2){
			for(h=n/2-h,i=0;i<n;i++){
				s=C[i]&1;t=A[i]&1;
				if(s&&t&&u1>0)o=1,u1--;
				if(s&&!t&&c1>0)o=1,c1--;
				if(!s&&t&&a1>0)o=1,a1--;
				if(!s&&!t&&h>0)o=1,h--;
				if(o)cout<<i+1<<" ",o=0;
			}
			return 0;
		}
	}
	cout<<-1;
}
