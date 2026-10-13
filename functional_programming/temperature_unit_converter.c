#include <stdio.h>

int main(){

    float celsius_to_fahrenheit(float celsius);
    float fahrenheit_to_celsius(float fahrenheit);
    
    float result;
    
    float fahrenheit;
    
    float celsius;
    
    int choice;
    

    while(1){

        printf("Choose from the option's below \n");
        printf("1.Celsius to Fahrenheit\n");
        printf("2.Fahrenheit to Celsius\n");
        printf("0.Exit\n");
        
        printf("Enter your choice : ");
        scanf("%d",&choice);

        if(choice == 0){

            printf("\nThanks for using the calculator\n");

            break;

        }else if(choice < 0 || choice > 2){

            printf("\nSomething went wrong\n\n");

            continue;

        }else if(choice == 1){

            printf("\nEnter temperature in celsius : ");
            scanf("%f",&celsius);

            result = celsius_to_fahrenheit(celsius);
            
            printf("Your output is : %.3f\n\n",result);

        }else{

            printf("\nEnter temperature in fahrenheit : ");
            scanf("%f",&fahrenheit);

            result = fahrenheit_to_celsius(fahrenheit);

            printf("Your output is : %.3f\n\n",result);

        }

    }

    return 0;

}

float celsius_to_fahrenheit(float celsius){return (celsius * ((float)9/5)) + 32;}

float fahrenheit_to_celsius(float fahrenheit){return (fahrenheit - 32) / ((float)9/5);}
