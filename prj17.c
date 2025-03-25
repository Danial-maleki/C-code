#include "stdio.h"
main(){
    int num,sum,prod;
    sum=0;
    prod=1;
    for(num=1;num<11;num=num+1){
        sum=sum+num;
        prod=prod*num;

    }
    printf("product and sum: %d %d",prod,sum);

}