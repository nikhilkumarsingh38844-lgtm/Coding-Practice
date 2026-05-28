#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the element %d:",i ,"index:");
        scanf("%d",&arr[i]);
    }  
    printf("your element of array is :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]); 
    }
    printf("\n");
     int diff = arr[size-1]-arr[0];
     printf("Difference  of last element and firs element of the array is :%d",diff);

}