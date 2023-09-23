#include <stdio.h>

int max_marks = 100; //global variable (can be used anywhere in any function)

// define a funtion hello()
void marks(){
    int maths = 12; // local variable
    printf("%d ", maths);
    printf("Out of a total of %d marks.", max_marks);
}

int main(){
    marks(); // Calling funtion hello()
    return 0;
}