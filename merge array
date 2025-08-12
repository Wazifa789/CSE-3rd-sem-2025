#include<stdio.h>
int main(){
    int size1;

    //1st array
    printf("Enter the size of 1st ARRAY-> ");
    scanf("%d",&size1);
    int arr1[size1];
    for(int i=0;i<size1;i++){
        printf("Enter number%d->",i+1);
        scanf("%d",&arr1[i]);
    }
    //printing 1s array
    printf("\n1st array is->");
    for(int i=0;i<size1;i++){
        printf("%d ",arr1[i]);
    }

    //2nd array
    int size2;
    printf("\nEnter the size of 2nd ARRAY-> ");
    scanf("%d",&size2);
    int arr2[size2];
    for(int i=0;i<size2;i++){
        printf("Enter number%d->",i+1);
        scanf("%d",&arr2[i]);
    }
    //printing 2nd array
    printf("\n2nd array is->");
    for(int i=0;i<size2;i++){
        printf("%d ",arr2[i]);
    }

    //merge
    int f_size=size1+size2;
    int f_array[f_size];
    //merge 1st array element in new array
   for(int i=0;i<size1;i++){
        f_array[i]=arr1[i];

   }
   //merge 2nd array elements in new array
    for(int i=0;i<size2;i++){
        f_array[i+size1]=arr2[i];

   }

   //printing merge array
    printf("\nMerge array is-> ");
    for(int i=0;i<f_size;i++){
        printf("%d ",f_array[i]);

   }

    return 0;
}
