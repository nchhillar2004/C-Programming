#include <stdio.h>

void funtion(){
    int a = 20; // non static variable
    static int b = 30; // Static variable of data type 'int' it can retain its value for multiple function calls
    a = a + 10;
    b = b +10;
    printf(" Non-Static : %d\n", a);
    printf(" Static : %d\n", b);
}

int main(){
    const int c = 20; // Constant variable of data type 'int' value cannot be changed or re-assigned
    printf("constant variable : %d\n", c);
    printf("First call\n");
    funtion();
    printf("Second call\n");
    funtion();
}