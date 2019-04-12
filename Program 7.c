#include <stdio.h>
void linearSearch();
void main(){
    int arr[10],toFind;
    printf("Enter the elements in the array.\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search.\n");
    scanf("%d",&toFind);
    linearSearch(arr,toFind);
    
}
void linearSearch(int arr[],int element){
    for(int i=0;i<10;i++){
        if(arr[i]==element){
            printf("\nElement is found at location. %d",i+1);
            break;}
    }
}
