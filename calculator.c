#include <stdio.h>

void sum(int num1, int num2){
    printf("\nSum of the numbers entered = %d", num1 + num2);
}

void dif(int num1, int num2){
    printf("\nDifference of the numbers entered = %d", num1 - num2);
}

void mul(int num1, int num2){
    printf("\nMultiplication of the numbers entered = %d", num1 * num2);
}

void div(int num1, int num2){
    printf("\nDivision of the numbers entered = %d", num1 / num2);
}

int main(){
    printf("---- Welcome to C Calculator ----\n");
    printf("Choices : \n");
    printf(" --'1' for Addition : \n");
    printf(" --'2' for Subtraction : \n");
    printf(" --'3' for Multiplication : \n");
    printf(" --'4' for Division : \n");
    printf(" --'5' to exit: \n");
    while (1)
    {
        int choice;
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        if (choice>0 && choice<5){
            int a, b;
            printf("\nEnter first number : ");
            scanf("%d", &a);
            printf("\nEnter second number : ");
            scanf("%d", &b);

            if (choice == 1){
                sum(a, b);
            }else if(choice == 2){
                dif(a,b);
            }else if(choice == 3){
                mul(a,b);
            }else if(choice == 4){
                div(a,b);
            }
        }else if(choice == 5){
            printf("Exiting Program");
            break;
        }else{
            printf("Enter a correct choice (1-5)");
        }
        
    }
}