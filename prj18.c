#include "stdio.h"
//prime number tetster
//this app is for test numbers

main(){
    int num,i,is_prime;
    printf("enter number to test: ");
    scanf("%d",&num);
    //now test for factors
    is_prime=1;
    for(i=2;i<num/2;i=i+1)
        if((num%1)==0)is_prime=0;
    if(is_prime==1)printf("the number is prime");
    else printf("the number is not prime");
}