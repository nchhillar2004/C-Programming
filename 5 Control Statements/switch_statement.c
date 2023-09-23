#include <stdio.h>
 
int main () {

   /* local variable definition */
   char grade;

   printf("Enter your grade to calculate result: ");
   scanf("%c", &grade);

   switch(grade) {
      case 'A' :
         printf("\nExcellent!" );
         break;
      case 'B' :
	     printf("\nOutstanding!" );
         break;
      case 'C' :
         printf("\nWell done" );
         break;
      case 'D' :
         printf("\nYou passed" );
         break;
      case 'F' :
         printf("\nBetter try again" );
         break;
      default :
         printf("\nInvalid grade" );
   }
   
   printf("\nYour grade is  %c", grade );
 
   return 0;
}
