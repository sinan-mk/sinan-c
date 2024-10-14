#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i,sinan=24;

    for(i=2;i<=sinan/2;i++){
        if(sinan % 2==0){
        printf("its not a prime number");

    }
    else{
       printf (" prime number");
    }
    return EXIT_SUCCESS;
    }
}