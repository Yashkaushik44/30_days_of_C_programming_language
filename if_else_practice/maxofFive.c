#include <stdio.h>

int main(){

    float num1;
    float *pNum1 = &num1;
    
    float num2;
    float *pNum2 = &num2;
    
    float num3;
    float *pNum3 = &num3;
    
    float num4;
    float *pNum4 = &num4;
    
    float num5;
    float *pNum5 = &num5;
    
    float max;
    float *pMax = &max;

    float maxofFive(float a, float b, float c, float d, float e);

    printf("Enter first number : ");
    scanf("%f",&num1);

    printf("\nEnter second number : ");
    scanf("%f",&num2);

    printf("\nEnter third number : ");
    scanf("%f",&num3);
    printf("\nEnter fourth number : ");
    scanf("%f",&num4);

    printf("\nEnter five number : ");
    scanf("%f",&num5);

    printf("max number is : %f\n",maxofFive(num1, num2, num3, num4, num5));

    return 0;

}

float maxofFive(float num1, float num2, float num3, float num4, float num5){

    if(num1 == num2 == num3 == num4 == num5){

        return printf("All numbers are same\n");

    }else if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){

        return num1;

    }else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){

        return num2;

    }else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){

        return num3;

    }else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){

        return num4;

    }else{

        return num5;

    }
}