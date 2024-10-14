#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i,sum=0,sinan;
    float avg=0;
    printf("Enter number");
    scanf("%d",&sinan);

    for(i=1;i<=sinan;i++){
        if(i!=1)
        printf(" + ");
        sum=sum+i;
        printf("%d",i);
      
    
    }
    printf("sum=%d\n",sum);
    avg=(float)sum/sinan;
    printf("avg=%.2f\n",avg);
    
    



}