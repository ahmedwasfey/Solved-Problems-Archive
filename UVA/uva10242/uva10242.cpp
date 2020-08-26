#include <iostream>
#include <utility>
#include <iomanip>
using namespace std;
int main (){
pair <double , double > p1,p2,p3,p4;int pa;
while (scanf("%lf%lf",&p1.first,&p1.second) != EOF)
{
    cin>>p2.first>>p2.second>>p3.first>>p3.second;
if(p3==p1)pa=2,cin>>p3.first>>p3.second;
else if(p3==p2)pa=1, cin>>p3.first>>p3.second;
else {
    cin>>p4.first>>p4.second;
    if(p4 ==p1)pa=2;
    else if(p4==p2)pa=1;
}
if(pa==2)p1.swap(p2);
p4.first  = (p3.first+p1.first)/2;
p4.second = (p3.second+p1.second)/2;
p4.first=2*p4.first -p2.first; p4.second=(double)2*p4.second - p2.second;
printf("%.3lf %.3lf\n",p4.first,p4.second);
}
    return 0;
}