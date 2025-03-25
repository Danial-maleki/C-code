#include "stdio.h"
main(){
    float num;
    int choose;
    printf("1: feet to meters 2:meters to feat: ");
    printf("Enter Choice: ");
    scanf("%d",&choose);
    if(choose==1){
        printf("enter number of feet: ");
        scanf("%f",&num);
        printf("meters: %f",num/3.28);
    }
    else{
        printf("enter number if meters: ");
        scanf("%f",&num);
        printf("feet: %f",num*3.28);

    }    
}