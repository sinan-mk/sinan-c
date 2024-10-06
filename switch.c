#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int choice;

    printf("1 for sinan \n2 for adil \n3 for shabeer \n4 for rufahad \nwho is your bestfriend");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    printf("it is sinan");
    
        break;

        case 2:
    printf("it is adil");
    
    break;

    case 3:
    printf("it is shabeer");
    break;
    case 4:
    printf("it is rufahad");
    
    break;
    
    default:
    printf("fool!!!");
        break;
    }

    return EXIT_SUCCESS;

}