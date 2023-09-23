#include <stdio.h>

/*
Welcome to C programming Repository
This is my first C program
*/

int main(){
    int a = 10;
    float b = 8.5;
    char c = 'u';
    int d = 40 + a;
    // %d for integers 
    printf("The value of a is %d \n", a); // \n for a new line
    // %f for real values/ float values
    printf("The value of b is %f \n", b);
    // %c for characters/ string
    printf("The value of c is %c \n", c);
    printf("The value of d is %d \n", d);
    printf("The value of a-b is %f", a-b);
    return 0;
}