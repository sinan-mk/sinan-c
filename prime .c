#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i,sinan;
    printf("enter number");
    scanf("%d\n",sinan);

    for(i=2;i<sinan;i++){
        if(i % 2==1)
        printf("print number");

       else{
            printf("not prime number");

        }
        return EXIT_SUCCESS;
        }


