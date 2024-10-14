#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, i;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to print the multiplication table from 1 to 10
    for(i = 1; i <= 15; i++) {
        printf("%d x %d = %d\n", i, num, i * num);
    }

    return EXIT_SUCCESS;
}


