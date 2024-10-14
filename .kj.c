#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i,n;

    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",i,n,i * n);
    }
}