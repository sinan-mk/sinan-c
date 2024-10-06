#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int sinan,shakeeb;
    float samad,mufeed,navaf;
    printf("enter int");
    scanf("%d%d",&sinan,&shakeeb);

    printf("Enter float");
    scanf("%f%f",&samad,&mufeed);

    navaf=(sinan+shakeeb+samad+mufeed)/100;
    printf("result is :%.2f/n",navaf);

    return 0;



}
