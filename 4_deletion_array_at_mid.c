#include<stdio.h>
int main(){

    int size;
    printf("\n---------------------------------------------");

    printf("\nEnter the size of the AARAY-> ");
    scanf("%d",&size);//input array SIZE

    int arr[size],i,mid;
    //input element in the array upto size
    for(i=0;i<size;i++)
    {   printf("Enter number%d: ",i+1);
        scanf("%d",&arr[i]);

    }
    //printing original array
    printf("\nOrigianl array is-> ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n----------------------X-----------------------");

    //deleting element at mid
    //caulating mid
    if(size%2==0){//calculating mid for even size array
        mid=size/2;
        for(i=mid-1;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
        //Printing array after deleting mid element
    printf("\nModified array is-> ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    }
    else
    {
        //calculating mid for odd size
        mid=(size+1)/2;

        for(i=mid-1;i<size;i++)
        {
            arr[i]=arr[i+1];
        } 
        size--;
        //Printing array after deleting mid element
        printf("\nModified array is-> ");

        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        size--;
    }






    return 0;
}
