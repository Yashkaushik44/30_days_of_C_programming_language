#include <stdio.h>

int main(){

    float largest(float a,float b);
    float smallest(float a, float b);
    float sumofnumbers(float a, float b);

    float num1;
    
    float num2;
    
    int count = 0;
    
    int choice;

    while(1){

        printf("Choose from the following options\n\n");

        printf("1.Sum of digits\n");
        printf("2.Find largest and smallest\n");
        printf("0.Exit\n");
        
        printf("Enter your chocie : ");
        scanf("%d",&choice);

        if(choice == 0){

            printf("\nThanks for using our programm\n");

            break;
            
        }else if(choice < 0 || choice > 2){

            printf("\nSomething went wrong!\n");

            continue;
            
        }
        
        printf("Enter first number : ");
        scanf("%f",&num1);

        count += 1;

        printf("Enter second number : ");
        scanf("%f",&num2);

        count += 1;
        
        if(choice == 1){

            printf("\nYour sum is : %f\n",sumofnumbers(num1, num2));
            
        }else{

            printf("\nThe largest is : %f\n",largest(num1, num2));
            printf("\nThe smallest is : %f\n",smallest(num1, num2));
            
        }
    }

    printf("Count is : %d\n",count);
    
    return 0;
}

float sumofnumbers(float num1, float num2){

    return num1 + num2;
    
}

float largest(float num1, float num2){

    if(num1 > num2){

        return num1;
        
    }else{

        return num2;
        
    }
}

float smallest(float num1, float num2){

    if(num1 < num2){

        return num1;
        
    }else{

        return num2;
        
    }
}
