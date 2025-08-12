#include<stdio.h>
int main(){

    int size;

    //size of the array
    printf("Enter the size of the array-> ");
    scanf("%d",&size);

    int arr[size],i;

    //input array elements
    for(i=0;i<size;i++){
        printf("Enter number%d->",i+1);
        scanf("%d",&arr[i]);
    }

    //printing original array
    printf("Array is->");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);

    }
    //changing 1st,mid and end element of the array

    int start,mid,end,cal_mid;
    //insert element at 1st
    printf("\nEnter a number to insert at 1st: ");
    scanf("%d",&start);

    //insert element at mid
    printf("\nEnter a number to insert at mid: ");
    scanf("%d",&mid);

    //insert element at end
    printf("\nEnter a number to insert at end: ");
    scanf("%d",&end);


    if(size>=3){
        arr[0]=start;
        arr[size-1]=end;
        if(size%2==0){//calulating mid
         //calculate mid for even terms

            cal_mid=size/2;
            arr[cal_mid-1]=mid;

        }
        else{
         //calculate mid for odd terms
            cal_mid=(size+1)/2;
            arr[cal_mid-1]=mid;

        }
    }
    else{
        printf("\nYou cannot delete start,mid & end element\n at the same time, because size!=3");
    }



    //update array
    printf("Updated array is-> ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);

    }



    // //insert element at end
    // printf("\nEnter a number to insert at end:");
    // scanf("%d",&end);

    // //calculating end
    // arr[size-1]=end;
    // //update array
    // printf("Updated array is->");
    // for(i=0;i<size;i++){
    //     printf("%d ",arr[i]);

    // }
    return 0;
}
