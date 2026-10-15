#include <stdio.h>

int main() {

    // function decleration
    float add(float a, float b);
    float sub(float a, float b);
    float mul(float a, float b);
    float div(float a, float b);

    // for user input variables
    int choice;
    float num1;
    float num2;

    // functional pointer declearation
    float (*p)(float,float);

    while(1){

        //menu
        printf("Welcome to the calculator\nPlease select from below\n");
        printf("0.Exit\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        //error handling
        if(choice < 0 || choice > 4){

            printf("\nIncorrect input please try again\n\n");

            continue;

        }else if(choice == 0){ //exit

            printf("\nThank you for using our calculator!\n\n");

            break;

        }

        // input
        printf("Enter num1 : ");
        scanf("%f",&num1); 

        printf("Enter num2 : ");
        scanf("%f",&num2);

        //user choice output
        if(choice == 1){

            p = add;

            printf("\nYour addition is : %.2f\n\n",p(num1,num2));

        }else if(choice == 2){

            p = sub;

            printf("\nYour subtraction is : %.2f\n\n",p(num1,num2));

        }else if(choice == 3){

            p = mul;

            printf("\nYour multiplication is : %.2f\n\n",p(num1,num2));

        }else{

            p = div;

            printf("\nYour division is : %.2f\n\n",p(num1,num2));

        }
    }

    return 0;

}

//function use
float add(float num1, float num2){

    return num1 + num2;

}

float sub(float num1, float num2){

    return num1 - num2;

}

float mul(float num1, float num2){

    return num1 * num2;

}

float div(float num1, float num2){

    return num1 / num2;

}
