//PRIM'S ALFORITHM
#include<stdio.h>
#include<stdlib.h>
#define inf 9999
#define max 20
int G[max][max], spanning[max][max],n;
int prims(){
    int cost[max][max],u,v,min_dist,dist[max],from[max],visited[max];
    int edges,i,j,min_cost;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        if(G[i][j]==0) cost[i][j] = inf;
        else cost[i][j] = G[i][j];
        spanning[i][j]=0;
    }
    dist[0]=0;
    visited[0]=1;
    for(i=1;i<=n;i++){
        dist[i]=cost[0][i];
        from[i]=0;
        visited[i]=0;
    }
    min_cost=0;
    edges=n-1;
    while(edges>0){
        min_dist=inf;
        for(i=1;i<n;i++)
        if(visited[i]==0 && dist[i]<min_dist){
            v=i;
            min_dist=dist[i];
        }
        u=from[v];
        spanning[u][v]=dist[v];
        spanning[v][u]=dist[v];
        edges--;
        visited[v]=1;
        for(i=1;i<n;i++)
        if(visited[i]==0 && cost[i][v]<dist[i]){
            dist[i]=cost[i][v]; from[i]=v;
        }
        min_cost=min_cost+cost[u][v];
    }
    return(min_cost);
}
int main(){
    int i,j,total_cost;
    printf("\nEnter vertices: ");scanf("%d",&n);
    printf("\nEnter adjacency matrix: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&G[i][j]);
    total_cost = prims();
    printf("\nSpanning Tree Matrix: ");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d\t",spanning[i][j]);
    }
    printf("Total cost of spanning tree: %d",total_cost);
    return 0;
}