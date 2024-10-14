#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,n,j;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        for(j=1;j<=n;j++){
            printf("%dx%d =%d, ",j,i,i * j);
        }
        printf("\n");
    }
}