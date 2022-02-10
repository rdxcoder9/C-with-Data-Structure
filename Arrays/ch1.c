/* Program to input values into an array and display them */
#include<stdio.h>

void main(){
    int arr[5]={0},i;
    for(i = 0;i < 5;i++){
        printf("Enter the value for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are : \n");
    for(i=0;i<5;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}
