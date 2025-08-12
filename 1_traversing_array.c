#include<stdio.h>
int main(){

    //traversing array

    int arr[20],size,i,step;
    printf("How many elements you want to store(max=20)-> ");
    scanf("%d",&size);

    //checking size is valid or not
    if(size>20 || size<=0){
        printf("Invalid size! Please enter a number between 1 and 20.\n");
        return 1;

    }

    //input array elements
    for(i=0;i<size;i++){
        printf("Enter number%d-> ",i+1);
        scanf("%d",&arr[i]);
    }

    //traversing in array
    printf("Array is->");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);

    }

    return 0;
}
