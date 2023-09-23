#include "myfile.h" // including 'myfile.h' into current file
#include <stdio.h>

int main(){
    // using the 'extern' varibale 'variable_age' of data type 'int'
    printf("Age as per external vaiable : %d\n", variable_age); 
    return 0;
}