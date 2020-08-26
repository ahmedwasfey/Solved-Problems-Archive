#include<iostream>
main(){int n,m;std::cin>>n>>m;std::cout<<(n==1?1:m>n/2?m-1:m+1);}