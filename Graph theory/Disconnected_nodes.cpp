#include<bits/stdc++.h>        //Number of nodes in the disconnected sub-graph which as traversed from the root node.
#include<iostream>
#include<vector>
using namespace std;
vector<int>graph[100000];
int sum=0;
bool visited[100000]={false};
void dfs(int v)
{
    visited[v]=true;
    sum++;

    for(auto u:graph[v])
    {
        if(!visited[u])
        {
            dfs(u);
        }

    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    

    }
    int head;
    cin>>head;
    dfs(head);
    int un;
    un=v-sum;
    cout<<un;

}
