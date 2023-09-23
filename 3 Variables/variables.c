#include <stdio.h>

int main(){
    // Local Variables
    // define a varible with data type 'int'
    int defined_variable;  //local variable
    // multiple variables with data type 'int'
    int maths_marks, science_marks, hindi_marks;
    printf("Value of defined variable is %d\n", defined_variable);

    // initialize values
    defined_variable = 12;
    printf("Value of defined variable after initializing is %d\n", defined_variable);
    maths_marks = 10;
    science_marks = 33;
    hindi_marks = 90;
    int sum = maths_marks + science_marks + hindi_marks;
    printf("Total marks %d\n", sum);
    // Valid variables : _variable, full_name, age, age2; age_3

    // Invalid variables : full name, 1age, 2_age, goto,for,switch,int(Keywords)
    
}