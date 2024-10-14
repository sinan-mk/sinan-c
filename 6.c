#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i, sinan;
    printf("Enter a number\n");
    scanf("%d",&sinan);
    for(i=1;i<=sinan;i++){
        printf("%d x %d=%d",i,sinan,i *sinan);
    }

}