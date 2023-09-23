#include <stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("\nNumber %d is even", num);
    }else{
        printf("\nNumber %d is odd", num);
    }
    return 0;
}