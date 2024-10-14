#include <stdio.h>
#include <stdlib.h>

int main (void){
    int j,limit,sum=0;
    printf("Enter a number");
    scanf("%d",&limit);
    for(j=1;j<=limit;j++){
        sum=sum+j;
        printf("%d",j);
    }
    printf("sum=%d",sum);
}