#include <stdio.h>

int main(){

    int age;
    
    float income;

    printf("Enter your age : ");
    scanf("%d",&age);

    printf("Enter your imcome : ");
    scanf("%f",&income);

    if(age < 18){

        printf("You are not eligible\n");

    }else if(age >= 18 && income < 20000){

        printf("You are eligible for basic account\n");

    }else if(age >= 18 && income >= 20000 && income <= 50000){

        printf("You are eligible for standard account\n");

    }else if(age >= 18 && income >= 50000){

        printf("You are eligible for premimum account\n");

    }else{

        printf("Something went wrong\n");
    }
    
    return 0;

}
