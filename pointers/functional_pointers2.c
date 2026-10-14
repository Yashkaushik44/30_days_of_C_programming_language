#include <stdio.h>

int main() {

    int sum(int a, int b);
    int subtract(int a, int b);

    int num1;
    int num2;
    int choice;

    printf("1.addition\n");
    printf("2.subtraction\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    printf("Enter num 1 : ");
    scanf("%d",&num1);

    printf("Enter num 2 : ");
    scanf("%d",&num2);

    int (*p)(int,int);
    
    if(choice == 1){

        p = sum;

        printf("Addition is : %d\n",p(num1,num2));
        
    }else{

        p = subtract;

        printf("Subtraction is : %d\n",p(num1,num2));
        
    }
    
    return 0;
    
}

int sum(int num1, int num2){

    return num1 + num2;
    
}

int subtract(int num1, int num2){

    return num1 - num2;
    
}