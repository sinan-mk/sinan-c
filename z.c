#include <stdio.h>
#include <stdlib.h>

int main(void) {
int choice;
printf("1 for poratta \n2 for chappathi \n3 for kuboos \n4 rotti \nenter your choice");
scanf("%d",&choice);

switch(choice){
case 1:
  printf("you have seleted porrotta ");
  break;


case 2:
   printf("you have selectd chappathi");

break;
case 3:
    printf("you have selected kuboos");
break;
break;
case 4:
   printf("you have selected rotti");      
}

return 0;


}