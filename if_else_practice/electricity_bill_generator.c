#include <stdio.h>

int main(){
    
    float units;

    printf("Enter the Eletricity units used : ");
    scanf("%f",&units);

    if(units >0 && units <= 100){

        printf("Your Electricity Bill is : %.2f\n",units*5);

    }else if(units >= 101 && units <= 200){

        printf("Your Electricity Bill is : %.2f\n",units*7);

    }else if(units > 200){

        printf("Your Electricity Bill is : %.2f\n",units*20);

    }else{

        printf("Something went wrong!");

    }

    return 0;
    
}
