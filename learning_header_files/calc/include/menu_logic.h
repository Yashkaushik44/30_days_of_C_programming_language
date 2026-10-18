#include <stdio.h>

#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

void menu_logic() {

   int choice;

   float num1;
   float num2;
    

   while(1) { // code logic

        printf("Welcome to the calculator!\nPlease select from the below!\n");

        printf("0.Exit\n");
        printf("1.Add\n");
        printf("2.Subtract\n");
        printf("3.Multiply\n");
        printf("4.Divide\n");

        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        
        if(choice < 0 || choice > 4) {

            printf("\nInvalid input!\n Try again!\n");

        }else if(choice == 0) {

            printf("\nThanks for using our calc!\n");

            break;

        }

        printf("Enter number 1 : ");
        scanf("%f",&num1);

        printf("Enter number 2 : ");
        scanf("%f",&num2);

        printf("\n");

        if(choice == 1) {

            printf("Sum is : %.2f\n\n", sum(num1, num2));

        }else if(choice == 2) {

            printf("Subtraction is : %.2f\n\n", sub(num1, num2));

        }else if(choice == 3) {

            printf("Multiplication is : %.2f\n\n", mul(num1, num2));

        }else{

            printf("Division is : %.2f\n\n", div(num1, num2));

        }
    }
}
