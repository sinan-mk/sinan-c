#include <stdio.h>
#include <stdlib.h>
int main (void){
    int i,j,k=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d",k++);
            
        }
        printf("\n");

    }

}