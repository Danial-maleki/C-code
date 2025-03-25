#include "stdio.h"
main(){
int tool;
tool = convert();
printf("your number converted to cm:%d",tool);
}
convert(){
    int num;
    printf("tool ra vared konid: ");
    scanf("%d",&num);
    return num*100;
}