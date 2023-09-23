#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 100){
        printf("Number you entered is less than 100.");
    }else if (num == 100){
        printf("Number is equal to 100.");
    }else{
        printf("Number is greater than 100.");
    }

    return 0;
}