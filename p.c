#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float totalmark;

    printf("Enter percentage");
    scanf("%f", &totalmark);

    if (totalmark<=90)
    {
        printf("A");
    }
    else if (totalmark <=80){
        printf("b");
    }
     else if (totalmark <=70){
        printf("c");
    }
     else if (totalmark <=60){
        printf("d");
    }
     else if (totalmark <=50){
        printf("e");
     }
    else{
    printf("failed");
    }

    return EXIT_SUCCESS;

}