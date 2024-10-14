#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i,num;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",i,num,i *  num);
    }

    return EXIT_SUCCESS;


    




}