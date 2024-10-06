#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int day;

    // Prompt the user to enter a number between 1 and 7
    printf("Enter a number (1-7) to display the corresponding day of the week: ");
    scanf("%d", &day);

    // Use switch case to print the corresponding day
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid Entry\n");
            break;
    }

    return EXIT_SUCCESS;
}
