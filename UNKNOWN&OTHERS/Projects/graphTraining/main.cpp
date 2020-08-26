#include <bits/stdc++.h>

using namespace std;
vector< vector<int >> adj ;
vector <int >visited;

int main()
{
    int n,m,from,to;
    cin>>n >>m;
    adj = vector< vector<int >> (n);
    visited= vector<int> (n,0);
    for (int i =0; i<m ; i++)
    {
        cin>>from>>to ;
        adj[from-1].push_back(to-1);
        //cout<<"ok \n";
    }
    for(int i =0; i<n ; i++)
    {
        for (int j=0; j<adj[i].size(); j++)
        {
            if (visited[adj[i][j]]==1)
        {   //cout<<adj[i][j]<<endl;
            adj[i].erase(adj[i].begin()+j);
                m--;
            }
            else visited[adj[i][j]]=1;
            }
    }
    cout<<m<<"\n";
    for(int i =0; i<n ; i++)
        for (int j=0,sz=adj[i].size(); j<sz; j++)cout<<i+1<<"  "<<adj[i][j]+1<<'\n';


    return 0;
}
