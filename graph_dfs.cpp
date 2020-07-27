#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void dfs(int src, bool *vis,vector<int>graph[])
{
    vis[src]=true;
    cout<<src<<' ';
    for(auto child:graph[src])
    {
        if(!vis[child])
        {
            dfs(child,vis,graph);
        }
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int>graph[v+1];
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);

    }
    bool vis[v+1]={false};
    for(int i=1;i<=v;i++)
    {
        if(!vis[i])
        {
            dfs(i,vis,graph);

        }

    }


}
