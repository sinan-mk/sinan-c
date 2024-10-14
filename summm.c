#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i,sum=0;

    for(i=1;i<=10;i++){
        if (i!=1){
            printf(" + ");
        }
        sum=sum+i;
        printf("%d",i);
    }
    printf("sum=%d",sum);

}