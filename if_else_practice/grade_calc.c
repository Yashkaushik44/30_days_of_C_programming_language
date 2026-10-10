#include <stdio.h>

int main(){
    
    float marks;

    printf("Enter your marks out of 100 : ");
    scanf("%f",&marks);

    if(marks >= 0 && marks < 37 ){

        printf("Grade : F\nResult : Fail\n");

    }else if(marks >= 37 && marks <= 39){

        printf("Grade : D\nResult : Pass\n");

    }else if (marks >= 40 && marks <= 49){

        printf("Grade : C\nResult : Pass\n");

    }else if(marks >= 50 && marks <= 59){

        printf("Grade : B\nResult : Pass\n");

    }else if(marks >= 60 && marks <= 69){

        printf("Grade : B+\nResult : Pass\n");

    }else if(marks >= 70 && marks <= 79){

        printf("Grade : A\nResult : Pass\n");

    }else if(marks >= 80 && marks <= 89){

        printf("Grade : A+\nResult : Pass\n");

    }else{

        printf("Grade : A++\nResult : Pass\n");

    }

    return 0;

}
