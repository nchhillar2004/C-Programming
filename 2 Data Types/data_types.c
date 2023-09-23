#include <stdio.h>

int main(){
    int a = 10;  // size = 4 bytes
    float b = 8.5;  // size = 4 bytes
    char c = 'u';  // size = 1 bytes
    int d = 40 + a;
    // L or l is used for long int in C.
    long int e = 99998L;  // size = 4 bytes
    // constant integer value
    // %d for integers
    printf("The value of a is %d \n", a);
    // %f for real values/ float values
    printf("The value of b is %f \n", b);
    // %c for characters/ string
    printf("The value of c is %c \n", c);
    printf("The value of d is %d \n", d);
    printf("The value of a-b is %f \n", a-b);
    // %ld for long integer value
    printf("The value of e is %ld \n", e);
    return 0;
}