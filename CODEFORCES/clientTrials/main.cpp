#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

using namespace std ;
int main (){
int myClientSock = socket(AF_INET,SOCK_STREAM ,0);
sockaddr_in myServerAdress;
myServerAdress.sin_family=AF_INET;
myServerAdress.sin_port=htons(5500);
myServerAdress.sin_addr.s_addr=INADDR_ANY;
if(connect(myClientSock,(struct sockaddr *)&myServerAdress,sizeof(myServerAdress))==-1){cout <<"Can't Connect oooppps !!\n";
return -1;
}
else cout <<"Connected !!\n";

while (1)
{
string s;getline(cin,s);
//cout <<s<<endl;
if(s=="exit")break;        //s.append('\n');
send(myClientSock,s.c_str(),s.size()+1,0);
}
return 0;
}
