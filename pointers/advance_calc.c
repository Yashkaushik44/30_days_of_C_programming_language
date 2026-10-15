#include <stdio.h>

int main(){

    int choice;
    int *pChoice = &choice; // declaring pointer for choice
    
    float num1;
    float *pNum1 = &num1; // declaring pointer for num1
    
    float num2;
    float *pNum2 = &num2; // declaring pointer for num2
    
    printf("Welcome\nChoose the operation number from below!\n");

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Divide\n");
    scanf("%d",&choice);

    printf("Enter first number : ");
    scanf("%f",&num1);

    printf("Enter second number : ");
    scanf("%f",&num2);

    if(choice == 1){

        printf("The addition of these two numbers are : %.2f\n",num1+num2);

    }else if(choice == 2){

        printf("The Subtraction of first number with second is  : %.2f\n",num1-num2);

    }else if(choice == 3){

        printf("The multiplication of the two numbers are : %.2f\n",(int)num1*num2);

    }else if(choice == 4){

        printf("The division of first and second number is : %.2f\n",num1/num2);
    
    }else{
        printf("Please select from the given options!\n");

    }

    return 0;
}