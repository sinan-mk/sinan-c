#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int n=9,i,flag=0;

    printf("enter a number");
    scanf("%d",&n);

    for(i=2;i<n/2;i++){
        if(n % i==0){
        flag=1;
        break;
        }

    }
    if(flag==0){
        printf("prime number");
    }
    else{
        printf("not prim number");
    }

return EXIT_SUCCESS;
    
}
