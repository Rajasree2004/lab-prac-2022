//SEARCH ALGORITHM - LINEAR & BINARY
#include <stdio.h>
#include <ncurses.h>//instead of conio.h for linux based OS install cmd- sudo apt-get install libncurses5-dev libncursesw5-dev 
#include <stdlib.h>
void main(){
    int a[100],i,n,item,s=0,ch,beg,end,mid;
    printf("Enter number of elements: ");scanf("%d",&n);
    printf("Enter elements: \n");    
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    while(1){
        printf("\n1. Linear Search \t2. Binary Search\n");
        printf("Enter choice: \n"); scanf("%d",&ch);
        switch(ch){
            case 1: printf("\tLinear Search\n");
                    printf("Enter element to search: "); scanf("%d",&item);
                    for(i=1;i<=n;i++){
                        if(a[i]==item){
                            printf("\nData found at: %d",i);
                            s=1; break;
                        }
                    }
                    if(s==0) printf("Data not found");
            case 2: printf("\tBinary Search");
                    printf("Enter element to search: "); scanf("%d",&item);
                    beg=1;end=n; mid=(beg+end)/2;
                    while (beg<=end && a[mid]!=item){
                        if(a[mid<item]) beg=mid+1;
                        else end=mid-1;
                        mid =(beg+end)/2;
                    }
                    if(a[mid]==item) printf("\nData found at: %d",mid);
                    else printf("Data not found"); break;
            case 3: exit(0);
                    
        }
    }
    getch();
}