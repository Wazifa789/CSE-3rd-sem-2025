#include<stdio.h>
int main(){

    int size;
    printf("\n----------------------------------------");

    //input size of the array
    printf("\nEnter the size of the ARRAY-> ");
    scanf("%d",&size);

    int arr[size],i;

    //input elements in the array
    for(i=0;i<size;i++){

        printf("Enter number%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    //printing elements in the array
    printf("\nOriginal array is-> ");
    for(i=0;i<size;i++){

        printf("%d ",arr[i]);
    }
    printf("\n----------------------------------------");

    //delete element at end
    size--;
    printf("\nModified array is-> ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);


    }
    printf("\n------------------X----------------------");



    return 0;
}
