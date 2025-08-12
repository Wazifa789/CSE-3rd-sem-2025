#include<stdio.h>
#include<limits.h>
int main(){

    int size;
    int low=-1;

    printf("Enter the size of the array->");
    scanf("%d",&size);

    int arr[size],temp;
    for(int i=0;i<size;i++){
        printf("Enter number%d->",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("Sorted array is-> ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

    }

    return 0;
}
