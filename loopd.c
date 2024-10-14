#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i;
    printf("enter a number");
    scanf("%d",&i);

    for(i=1;i<=100;i++){
        printf("=%d\n",i);

    }
    return EXIT_SUCCESS;
}