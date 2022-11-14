//INSERTIOn SORT
#include <stdio.h>
int main(){
    int arr[10]={34,9,58,63,75,7,5};
    int n=10;
    int i, j, pos, swap;
    for(i=0;i<n-1;i++){
        pos = i;
        for(j = i+1;j<n;j++){
            if(arr[pos]>arr[j]){
                pos = j;
            }
            if(pos != i){
                swap = arr[i];
                arr[i] = arr[pos];
                arr[pos] = swap;
            }
        }
    }    
    for(i=0;i<n;i++){
        printf("%d\n", arr[i]); //Dont use tab for printing
    }
}