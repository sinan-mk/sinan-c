#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int sinan,i;
    printf("enter a number");
    scanf("%d",&sinan);
    for(i=2;i<=sinan;i++){
        if(i % 2==0)
        printf("%d\n",i);
    }
}

    
