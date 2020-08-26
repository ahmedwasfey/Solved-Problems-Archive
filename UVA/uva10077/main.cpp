#include <iostream>
#include <string>
using namespace std;
int main()
{
    long bast,makam,inputbast,inputmakam, rightparentbast,rightparentmakam,leftparentbast, leftparentmakam,tempbast,tempmakam;
    string reslt;
    while(true)
    {
        bast =1,makam=1,rightparentbast =1,rightparentmakam=0,leftparentbast=0, leftparentmakam=1;
        cin>>inputbast>>inputmakam;
        if(inputbast+inputmakam==2)break;
        while(true)
        {
            tempbast=bast, tempmakam=makam;
            if(inputbast*makam > bast*inputmakam)
            {
                bast +=rightparentbast, makam+=rightparentmakam;
                leftparentbast=tempbast,leftparentmakam=tempmakam;
                reslt.push_back('R');
            }
            else if(inputbast*makam < bast*inputmakam)
            {
                bast +=leftparentbast, makam+=leftparentmakam;
                rightparentbast=tempbast,rightparentmakam=tempmakam;
                reslt.push_back('L');
            }
            else
            {
                cout<<reslt<<"\n";
                reslt="";
                break;
            }
        }
    }
    return 0;
}
