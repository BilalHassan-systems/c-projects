#include <stdio.h>
int main(){
    //calculator using switch

    //input num1
    int num1;
    printf("Enter number 1: ");
    scanf("%d", &num1);

    //input num2
    int num2;
    printf("Enter number 2: ");
    scanf("%d", &num2);



    //procedure for selecting operator using switch 


    char op;
    printf("Enter Operator: ");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("Addition: %d", num1+num2);
        break;

        case '-':
        printf("Subtraction: %d", num1-num2);
        break;

        case '*':
        printf("Multiplication: %d", num1*num2);
        break;

        case '/':
        printf("Division: %f", (float)num1/num2);
        break;

        default:
        printf("Invalid Value");
        
    }
}