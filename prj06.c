#include "stdio.h"
main(){
int sqr;
sqr = get_sqr();
printf("squre: %d",sqr);
}
get_sqr(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    return num * num;
}