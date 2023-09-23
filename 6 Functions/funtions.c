#include <stdio.h>

// funtion with an argument of datatype 'char' as string of length (50)
void hello(char name[50]){
    printf("Hello %s", name); // return the string (name)
}

int main(){
    hello("Nishant Chhillar"); // call the funtion with passing the value of argument 'name'
    return 0;
}