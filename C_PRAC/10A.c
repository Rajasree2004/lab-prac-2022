#include <stdio.h>
int a[50][50], n, visited[50];
int q[20], front=-1,rear=-1,s[20],top=-1,count=0;
void bfs(int v){
    int i,curr;
    visited[v]=1;
    q[++rear]=v;
    while(front!=rear){
        curr=q[++front];
        for(i=1;i<=n;i++){
            if((a[curr][i]==1) && (visited[i]==0)){
                q[++rear]=i;
                visited[i]=1;
                printf("%d",i);
            }
        }
    }
}
void dfs(int v){
    int i;
    visited[v]=1;
    s[++top]=v;
    for(i=1;i<=n;i++){
        if(a[v][i]==1 && visited[i]==0){
            printf("%d",i); dfs(i);
        }
    }
}
int main(){
    int ch,start,i,j;
    char c,dummy;
    printf("Enter vertices: "); scanf("%d",&n);
    printf("\nEnter elements: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d --> %d: ",i,j); scanf("%d",&a[i][j]);
        }
    }
    printf("\nAdjacency Matrix: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    do{
        for(i=1;i<=n;i++) visited[i]=0;
        printf("\tMENU\n1. Breadth First Search\n2. Depth First Search\n");
        printf("Enter choice: ");scanf("%d",&ch);
        printf("\nEnter the starting vertex: "); scanf("%d",&start);
        switch(ch){
            case 1: printf("\nNodes reachable from starting vertex: %d are: ",start);
                bfs(start);
                for(i=1;i<=n;i++){
                    if(visited[i]==0) printf("\nThe vertex that is not reachable is %d",i);
                }break;
            case 2: printf("\nNodes reachable from starting vertex %d are: ",start);
                    dfs(start); break;
            default: printf("\nEnter valid choice");
        }printf("\nDo you want to continue (y/n): "); scanf("%c",&dummy);scanf("%c",&c);

    }while(c=='y'||c=='Y');
}