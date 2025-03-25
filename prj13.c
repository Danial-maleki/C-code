#include "stdio.h"
main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter secend number: ");
    scanf("%d",&num2);
    if(num2==0)printf("can`t divide by zero");
    else printf("answer is :%d",num1/num2);
}