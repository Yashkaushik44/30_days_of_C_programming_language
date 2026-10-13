#include <stdio.h>

int main(){
    
    //Function Decleration

    float add(float a, float b);
    float sub(float a, float b);
    float mul(float a, float b);
    float div(float a, float b);

    float num1, num2, result;

    int choice;

    while(1){

        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Divide\n");
        printf("0.Exit\n");
        
        printf("Enter your choice : ");
        scanf("%d",&choice);

        if(choice == 0){

            printf("Thanks for using the calculator\n");
            
            break;
        
        }
        
        if(choice < 1 || choice > 4){

            printf("\nSomething went wrong!\n\n");

            continue;

        }
        
        printf("Enter 1st number : ");
        scanf("%f",&num1);

        printf("Enter 2nd number : ");
        scanf("%f",&num2);
        
        if(choice == 1){
            
            result = add(num1,num2);

            printf("\nAddition is %.2f\n\n",result);

        }else if(choice == 2){

            result = sub(num1,num2);

            printf("\nSubtraction is %.2f\n\n",result);

        }else if(choice == 3){

            result = mul(num1,num2);
            printf("\nMultiplication is %.2f\n\n",result);

        }else if(choice == 4){

            if(num2 == 0){

                printf("\nCannot divide be zero\n\n");

            
            }else{
           
            result = div(num1,num2);

            printf("\nDivision is %.2f\n\n",result);

           }
        }
    }

    return 0;
}

float add(float num1,float num2){return num1 + num2;}
float sub(float num1,float num2){return num1 - num2;}
float mul(float num1,float num2){return num1 * num2;}
float div(float num1,float num2){return num1 / num2;}
