#include <stdio.h>
int a[50][50], n, visited[50];
int q[20], front=-1,rear=-1,s[20],top=-1,count=0;
void bfs(int v){
    int i,curr;
    visited[v]=1;
    q[++rear]=v;
    while(front!=rear){
        curr=q[++front];
        for(i=0;i<n;i++){
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
    for(i=0;i<n;i++){
        if(a[v][i]==1 && visited==0){
            printf("%d",i); dfs(i);
        }
    }
}
int main(){
    int ch,start,i,j;
    char c,dummy;
    printf("Enter vertices: "); scanf("%d",&n);
    printf("\nEnter elements: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d --> %d: ",i,j); scanf("%d",&a[i][j]);
        }
    }
    printf("\nAdjacency Matrix: ");
    for(i=0;i<n;i++){
        
    }
}