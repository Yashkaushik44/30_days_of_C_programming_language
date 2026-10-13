#include <stdio.h>

int main(){

    // function declearation 

    int changePin(int entered_pin,int actual_pin);
    float deposit(float balance, float amount);
    float withdraw(float balance, float amount);

    // variables

    int pin = 123;
    
    int enter_pin;
    
    int new_pin;
    
    float balance;
    
    float amount;
    
    int attempts = 0;
    
    float result;
    
    int choice;

    // verify user pin

    while(attempts <= 3){ 

        printf("Enter pin : ");
        scanf("%d",&enter_pin);

        attempts += 1;

        if(enter_pin != pin){

            printf("\nWrong pin try again!\n");

            if(attempts == 1){
                
                printf("2 attempts left\n");
 
            }else if(attempts == 2){

                printf("1 attempt left\n");

            }else{

                printf("0 attempts left\n");
                
                break;

            }
        }

        // Menu
        if(enter_pin == pin){

            printf("Choose from the following options\n");

            printf("1.Check Balance\n");
            printf("2.Deposit\n");
            printf("3.Withdraw\n");
            printf("4.Change pin\n");
            printf("0.Exit\n");

            printf("\nEnter your choice : ");
            scanf("%d",&choice);

            // error handling and program Exit execution

            if(choice == 0){

                printf("\nThanks for using out ATM!\n");
                
                break;

            }else if(choice < 0 || choice > 4){

                printf("Something went wrong!\n");

                continue;

            }
            
            printf("Enter Balance : ");
            scanf("%f",&balance);

            if(choice == 1){

                printf("Your balance is %.2f\n",balance);

            }else if(choice == 2){

                printf("Enter the amount you want to deposit : ");
                scanf("%f",&amount);

                result = deposit(balance,amount);

                printf("Your amount is successfully deposited into your account!\n");
                printf("Your current balance is : %.2f\n",result);

            }else if(choice == 3){

                printf("Enter the amount you want to withdraw : ");
                scanf("%f",&amount);

                if(amount > balance){

                    printf("Cannot withdraw more then balance!");

                    continue;

                }else{

                    result = withdraw(balance,amount);

                    printf("Transaction successful!\n");
                    printf("Your current balance is : %.2f\n",result);
                
                }
    
            }else{
                printf("Enter your new pin : ");
                scanf("%d",&new_pin);

                result = changePin(new_pin,pin);
                
                printf("Your pin has been changed successfully!");

            }
        }

    }

    return 0;

}

float deposit(float balance, float amount){return balance + amount;}
float withdraw(float balance, float amount){return balance - amount;}
int changePin(int new_pin, int pin){

    while(new_pin == pin){

        printf("You cannot enter the same pin!");

        continue;

    }
    
    if(new_pin != pin){

        pin = new_pin;

        return pin;

    }
}
