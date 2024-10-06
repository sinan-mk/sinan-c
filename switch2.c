#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int choice;
    printf("1 for sunday \n2 for monday \n3 for tuesday \n4 for wednesday \n5 for thursday \n6 for friday \n7 for saturday \n enter the day");
    scanf("%d",&choice);

    switch (choice)
    {
          case 1:
    printf("you selected sunday");
    break;
    case 2:
    printf("you selected monday");
        break;

     case 3:
    printf("you selected tuesday");
    break;
     case 4:
    printf("you selected wednesday");
    break;
     case 5:
    printf("you selected thursday");
    break;
     case 6:
    printf("you selected friday");
    break;
     case 7:
    printf("you selected saturday");
    break;
    default:
    printf("invalid Entry");
        break;
    }
    return EXIT_SUCCESS;
}