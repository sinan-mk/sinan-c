#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int sinan,i;
    printf("enter a number");
    scanf("%d",&sinan);

  

    for(i=sinan;i>=2;i--){
        printf("%d\n",i);

    }
    return EXIT_SUCCESS;
}