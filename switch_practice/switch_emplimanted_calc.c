#include <stdio.h>

int main(void) {

    int num1;
    int num2;
    int choice;
    
    while(1) {

     printf("Welcome to the calculator!\n");
     printf("Please select from the below\n");

     printf("0.Exit\n");
     printf("1.Sum\n");
     printf("2.Sub\n");
     printf("3.Mul\n");
     printf("4.div\n");
    
     printf("\nEnter your choice : ");
     scanf("%d",&choice);

     if(choice == 0) {

        printf("\nThanks for using the calculator!\n\n");

        break;

     }else if(choice > 0 && choice < 5) {

        printf("\nEnter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);
        
        printf("\n");

        switch(choice) {

            case 1:

                printf("The sum is : %d\n", num1 + num2);

                break;

            case 2:

                printf("The subtraction is : %d\n", num1 - num2);

                break;

            case 3:

                printf("The multiplication is : %d\n", num1*num2);

                break;

            case 4:
                
            printf("After dividing : %d\n", num1/num2);

            break;

        }

     }else{

         printf("\nChoose from the given options!\n\n");

     }

     printf("\n");
    }

    return 0;

}
