#include<stdio.h>            //Adjacency matrix of graph.
#define max 20
int adj[max][max];
int m;                  //m is number of vertices.
int main()
{
    create_graph();
    while(1)
    {
    int ch,del;
    printf("1.insert\n2.display\n3.delete\n4.exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        insert_node();
        break;
        case 2:
        display();
        break;
        case 3:
        scanf("%d",&del);
        delete_node(del);
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("NOT valid option\n"); 
    }
    }
}
create_graph()
{
    int origin,dest,max_edges;
    printf("number of nodes\n");
    scanf("%d",&m);
    max_edges=m*(m-1);
    for(int i=1;i<=max_edges;i++)
    {
        printf("enter edge %d\n",i);
        scanf("%d %d",&origin,&dest);
        if(origin==0&&dest==0)
        break;
        if (origin > m || dest > m || origin <= 0 || dest <= 0) {
            printf("Invalid edge!\n");
            i--;}
        else
        {
            adj[origin][dest]=1;
        }   
    }
}
display()
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%4d",adj[i][j]);
        }
        printf("\n");
    }
}
insert_node()
{
    m++;
    printf("inserted node %d\n",m);
    for(int i=1;i<=m;i++)
    {
        adj[i][m]=0;
        adj[m][i]=0;
    }
}
delete_node(int del)
{
    if(m==0)
    printf("graph is empty\n");
    else if(del>m)
    {
        printf("node not found\n");
    }
    for(int i=del;i<=m-1;i++)
    {
        for(int j=1;j<=m;i++)
        {
            adj[j][i]=adj[j][i];
            adj[i][j]=adj[i+1][j];
        }
    }

}
