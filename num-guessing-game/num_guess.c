#include<stdio.h>
int main(){


    //number guessing game
    printf("Number Guessing Game!\n");


    
    //-----------------------------------------secret number-------------------------------------------
    
    int secret = 5;

    //taking input from user

    while(1){
        int num;
        printf("Enter a Number: ");
        scanf("%d",&num);

        //checking if the input number is less then or too high or we find equal number

        if(num<secret){
            printf("Too Low\n");
        }else if(num>secret){
            printf("Too High\n");
        }else if(num==secret){
            printf("Correct!");
            break;
        }
    }
}