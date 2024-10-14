#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int i,sinan,cube;
    printf("Enter a number\n");
    scanf("%d",&sinan);
    

    for(i=1;i<=sinan;i++){
     printf("%d\n",i);
       
    }
    cube=sinan*sinan*sinan;
    printf("%d",cube);
}
