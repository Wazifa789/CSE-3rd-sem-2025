#include<stdio.h>
int main(){

    int size;
    printf("\n--------------------------------------------------");
    //input SIZE of the array
    printf("\nEnter the size of the ARRAY-> ");
    scanf("%d",&size);

    int arr[size],i;
    //input elements in the array
    for(i=0;i<size;i++){

        printf("Enter number%d: ",i+1);
        scanf("%d",&arr[i]);

    }

    //printing elements in the array
    printf("\nOriginal ARRAY is->");
    for(i=0;i<size;i++){

        printf("%d ",arr[i]);
    }

    //delete elements at start
    for(i=0;i<size;i++){

        arr[i]=arr[i+1];
    }
    size--;

    //printing modified array
    printf("\nModified Array is->");
    for(i=0;i<size;i++){

        printf("%d ",arr[i]);
    }



    return 0;

}
