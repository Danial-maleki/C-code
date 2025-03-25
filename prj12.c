#include "stdio.h"
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num<0)printf("your number is negetive");
    else printf("number is possitive");
}