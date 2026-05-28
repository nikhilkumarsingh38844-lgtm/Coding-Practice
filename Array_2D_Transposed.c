//program to print transpose of matrix.
#include<stdio.h>
int main(){
    int arr[2][3],i,j;
    printf("enter the element of metrix:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }  
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("transpose of element of metrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;

}