#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,j,n=5;

    for(i=n;i>=1;i--){
      for(j=1;j<=i;j++){
        printf("*");
      }
      
       printf("\n");
    }
   
    return 0;
    
    
    
    
}