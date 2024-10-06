#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int principle;
    float interestrate,numberofyears,simpleinterest;

    printf("enter principle:");
    scanf("%d",&principle);

    printf("enter intrest rate:");
    scanf("%f",&interestrate);

    printf("enter no of years: ");
    scanf("%f",&numberofyears);

    simpleinterest=(principle*interestrate*numberofyears)/100;

    printf("simple interest :%.2f/n",simpleinterest);

    return EXIT_SUCCESS;

}