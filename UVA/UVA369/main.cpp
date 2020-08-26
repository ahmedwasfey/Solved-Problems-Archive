#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define loop(v,strt,end) for (int v=strt;v<end;v++)
ll arrbst[105]={},arrmkm[105]={};
void ff(int s1, int s2){
loop(i,0,s1)cout <<arrbst[i]<<" ";
cout<<endl;
loop(i,0,s2)cout <<arrmkm[i]<<" ";
cout <<endl;
}
ll choose (int n , int m){
 int mx =max(m , n-m ), mn=min(m, n-m);
 int indxbst=0,indxmkm=0;
loop (i, mx+1,n+1){
arrbst[indxbst]=i;indxbst++;
 }
loop(i,2,mn+1){
    arrmkm[indxmkm]=i;
    indxmkm++;
}
//ff(indz,indk);
loop(i,0,indxmkm){
     //cout <<"bstsz =:"<<indxbst<<" mkmsz = : "<<indxmkm<<"  finished loop\n";
    loop(j,0,indxbst){
        //cout <<"inxmkm = :" <<i<<" indxbs = : "<<j<< " "<<arrmkm[i]<<" "<<arrbst[j]<<"this debug\n";
        if(arrbst[j]%arrmkm[i]==0){
            //cout <<arrmkm[i]<<" "<<arrbst[j]<<"this devides\n";
            arrbst[j]= (arrbst[j]/arrmkm[i]);
            arrmkm[i]=1;
            break;
        }
    }
}
ll rsltb =1;
//ff(indz,indk);
loop(i,0,indxbst)rsltb*=arrbst[i];
loop(i,0,indxmkm)rsltb/=arrmkm[i];
return rsltb;
}
int main(){
    while (1)
    {
        int x, y;
        cin >>x>>y;
        if(x+y==0)break ;
        cout <<x<<" things taken "<<y<<" at a time is "<<choose(x,y)<<" exactly.\n";
    }
    
    return 0;
}