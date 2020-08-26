#include <iostream>
#include <vector>
using namespace std;

int main()
{
char xc;
vector<vector<double>> data(15);
int indx=0;
while(true){
    cin>> xc;
    if(xc=='*')break ;
    data[indx]=vector<double>(4);
    cin>>data[indx][0]>>data[indx][1]>>data[indx][2]>>data[indx][3];
    indx++;
}
int sz=indx;
indx=1;
double x,y; bool found;
while(true){
    found=false;
    cin>>x>>y;
    if(x==9999.9&&y==9999.9)break;
    for (int i=0;i<sz;i++){
           // cout<<i<<"HHH"<<data.size()<<"\n";
        if(x>data[i][0]&&x<data[i][2]&&y<data[i][1]&&y>data[i][3]){
            cout<<"Point "<<indx<<" is contained in figure "<<i+1<<"\n";
            found=true;
        }
    }
        if(!found)cout <<"Point "<<indx<<" is not contained in any figure\n";
    indx++;
}
    return 0;
}
