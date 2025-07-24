#include<stdio.h>
int main(){
    int size=1,arr[size],i,pos=0,neg=0;
    printf("how many number you want to enter->");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("\nEnter number%d-> ",i+1);
        scanf("%d",&arr[i]);
    }    
    //count number of positive and negative numbers
        for(i=0;i<size;i++){
            if(arr[i]>0){
                pos++;
            }
            else{
                neg++;
            }
      
    }
    printf("\nPOSITIVE NUMBERS ARE->%d",pos);
    printf("\nNEGATIVE NUMBERS ARE->%d",neg);
    return 0;
}
