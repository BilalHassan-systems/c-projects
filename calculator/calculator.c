#include <stdio.h>
int main(){

    //taking input for number 1 
    int num1;
    printf("Enter num1: ");
    scanf("%d",&num1);


    //taking input for number 2
    int num2;
    printf("Enter num2: ");
    scanf("%d",&num2);

    //procedure for operator
    char op;
    printf("Enter Operator: ");
    scanf(" %c",&op);
    if(op == '+'){
        printf("Addition: %d\n", num1+num2);
    }else if(op == '-'){
        printf("Subtraction: %d\n", num1-num2);
    }else if(op == '*'){
        printf("Multiplication: %d\n", num1*num2);
    }else if(op == '/'){
        printf("Division: %f\n", (float)num1/num2);
    }

}