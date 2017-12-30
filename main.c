#include <stdio.h>
#include <string.h>

int main(void){

   int done=0, more=1, i=0, j;
   char menu,name[50][30], unit[50][10];
   int qty[5], tempQty;

   do{ //Menu.
      printf("Welcome to your grocery list!\n");
      printf("\tPress 1 to add an item.\n");
      printf("\tPress 2 to print the list.\n");
      printf("\tPress = to exit.\n");
      scanf(" %c", &menu);

      switch (menu){
         case '1': //Add new item to grocery list.
            more=1;
            while(more==1){
               printf("\nEnter item name: ");
               scanf("%s", name[i]);

               printf("Enter item quantity: ");
               scanf("%d", &tempQty);
               qty[i] = tempQty;

               printf("Enter item unit: ");
               scanf("%s", unit[i]);

               printf("\n%d %s of %s added.\n", qty[i], unit[i], name[i]);
               i++;
               printf("[1] Add another item\tor\t[0] Menu\n");
               scanf ("%d" , &more);
               if (more!=1){
                  printf("\n");
                  break;
               }
            }
            break;

         case '2': //Print out the grocery list.
            printf("\n--------------------------------------\n");
            printf("Here's your grocery list:\n");
            for(j=0; j<i; j++){
               printf("%s\t\t%d\t\t%s\n", name[j], qty[j], unit[j]);
            }
            printf("\nYou will now be taken back to the main menu.\n");
            printf("--------------------------------------\n");
            break;

         case '=': //Exit loop
            done=1;
            break;

         default: //Default
            printf("Error: Please try again.\n\n");
            break;
      } //End switch statement

   }while(!done); //End do while statement

   return 0;
}
