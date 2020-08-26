#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
using namespace std ;
int main(){
int wasfyServer = socket(AF_INET,SOCK_STREAM,0);
sockaddr_in myServerAdd;
myServerAdd.sin_family =AF_INET;
myServerAdd.sin_port = htons(5500);
myServerAdd.sin_addr.s_addr=INADDR_ANY ;
bind(wasfyServer ,(struct sockaddr *) &myServerAdd,sizeof(myServerAdd));
listen(wasfyServer,5);
int clientSock =accept(wasfyServer,NULL,NULL);
if(clientSock==-1)cout <<"shiiiiiiiiit\n";
char massgToEcho [500];
while (true)
{
memset(massgToEcho,0,500);
int szOfOurMassg= recv(clientSock , massgToEcho,500,0);
//cout <<szOfOurMassg<<'\n';
if(szOfOurMassg <= 0){
cout <<"Client disconnected\n";
break ;
}
cout <<string(massgToEcho,0,szOfOurMassg)<<endl;


}
return 0;
}
