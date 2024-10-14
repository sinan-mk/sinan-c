#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i,sinan;
    for(i=1;i<=19;i++){
        if(i%2==1){
        printf("%d",i);
    }
    if(i!=1)
    printf(" + ");
}