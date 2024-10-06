#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int principle;
    float interestrate,numberofyears,simpleinterest;

    printf("Enter principle amount");
    scanf("%d",&principle);

     printf("intrest rate");
    scanf("%f",&interestrate);


    printf("Enter no of years");
    scanf("%f",&numberofyears);

    simpleinterest=(principle*interestrate*numberofyears)/100;
    printf("simple interest is :%.2f/n",simpleinterest);

    return 0;






}