#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i,sinan=12,flag=0;

    for(i=2;i<=sinan/2;i++){
        if(sinan%i==0)
        flag=1;
        break;
    }
    if(flag==0){
        printf("its a prime number");

    }
    else{
       printf ("not prime number");
    }
    return EXIT_SUCCESS;

}