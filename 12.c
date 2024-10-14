#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i,j,limit=10;
    for(i=2;i<limit;i++){
        for(j=1;j<i;j++){
            printf("%d",j);
        }
        printf("\n");

    }

}