//INSERTION SORT
#include <stdio.h>
void insertion(int a[], int n){
    int i,j,temp;
    for(i=1; i<n;i++){
        temp=a[i]; j=i-1;
        while((temp<a[j])&&(j>=0)){
            a[j+1] = a[j];
            j-=1;
        }
        a[j+1]=temp;
    }
}
void display(int a[], int n){
    int i; printf("\tSorted List\n");
    for(i = 0; i<n;i++) printf("%d\n", a[i]);
}
void main(){
    int a[100], n, i,ch;
    printf("\nEnter number elements: "); scanf("%d",&n);
    printf("Enter elements: "); 
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("\tInsertion Sort"); insertion(a,n); display(a,n);    
}