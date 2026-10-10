#include <stdio.h>

int main(){
    
    float balance;
    
    float withdrawl_amount;

    printf("Enter your balance : ");
    scanf("%f",&balance);

    printf("Enter your withdrawl amount : ");
    scanf("%f",&withdrawl_amount);

    int withdrawable_amount = balance - 500; // minimum balance is 500

    if(withdrawl_amount <= 0 && withdrawable_amount <= 0){

        printf("Withdrawl amount or balance cannot be zero or negative\nTransaction Failed!\n");

    }else if(withdrawl_amount > withdrawable_amount){

        printf("You cannot withdraw more then the withdrawlable balance\nTransaction Failed!\n");

    }else{

        printf("Transaction successfull!\nRemaning Balance : %.2f\n",balance - withdrawl_amount);
    }

    return 0;

}
