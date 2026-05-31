//WAP to print 2D array (matrix)& calculat sum.
#include<stdio.h>
int main(){
    int arr[2][3],i,j,sum=0;
    printf("Enter an element of array:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("the sum of matrix: %d ",sum);
return 0;
}