#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,j,n=5;

    for(i=1;i<=n;i++){
      for(j=5;j>=i;j--){
        printf("*");
      }
    }
    printf("\n");
    return 0;
    
    
    
    
}