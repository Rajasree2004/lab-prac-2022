//DIJKSTRA
#include<stdio.h>
#include<curses.h>
#define inf 9999
#define max 10
void dijkstra(int G[max][max],int n,int startnode){
    int cost[max][max],dist[max],pred[max],visited[max];
    int count,min_dist,nextnode,i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(G[i][j]==0) cost[i][j] = inf;
            else cost[i][j] = G[i][j];
    for(i=0;i<n;i++){
        dist[i]=cost[startnode][i];
        pred[i]=startnode;
        visited[i]=0;
    }
    dist[startnode]=0;
    visited[startnode]=1;
    count =1;
    while(count < n-1){
        min_dist=inf;
        for(i=0;i<n;i++) 
            if(dist[i]<min_dist && !visited[i]){
                min_dist=dist[i];
                nextnode=i;
            }
        visited[nextnode]=1;
        for(i=0;i<n;i++)
            if(!visited[i]) 
                if(min_dist+cost[nextnode][i] < dist[i]){
                    dist[i]=min_dist + cost[nextnode][i];
                    pred[i]=nextnode;
                }
        count++;
    }
    for(i=0;i<n;i++)
        if(i!=startnode){
            printf("\nDistance of node %d = %d", i, dist[i]);
            printf("\nPath=%d",i);
            j=i;
            do{
                j=pred[j];
                printf("<--%d",j);
            }while(j!=startnode);
        }
}

int main(){
    int G[max][max],i,j,n,u;
    printf("Enter vertices: "); scanf("%d",&n);
    printf("\nAdjacency Matrix: \n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&G[i][j]);
    printf("\nEnter starting node: "); scanf("%d",&u);
    dijkstra(G,n,u);
    return 0;
}