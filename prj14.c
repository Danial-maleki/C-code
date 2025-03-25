#include "stdio.h"
main(){
    int num1,num2;
    int choose;
    
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("enter secend number: ");
    scanf("%d",&num2);
    printf("1: plus two number 2:divide two number");
    scanf("%d",&choose);
    if(choose==1)printf("answer is: %d",num1+num2);
    else printf("awnser is: %d",num1*num2);
    
}