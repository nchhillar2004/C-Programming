#include <stdio.h>

int main(){
    // Declare the variables
    int num;
    char ch;
 
    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &num); // assigning the value to the location/ varible 'num'

    //For input Clearing buffer
      while((getchar()) != '\n');

    // Input the character
    printf("\nEnter a character: ");
    scanf("%c", &ch);

    printf("\nInteger value :  %d\n", num);
    printf("Character value :  %c\n", ch);
    return 0;
}
