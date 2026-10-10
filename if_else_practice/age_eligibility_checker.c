#include <stdio.h>

int main(){

    unsigned int age;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age < 18){

        printf("You are a minor\n");

    }else if(age >= 18 && age <= 59){

        printf("You are an adult\n");

    }else if(age >= 60){

        printf("You are a Senior Citizen\n");

    }else{

        printf("Enter a valid age");

    }

    return 0;
    
}
