#include <stdio.h>

int main(){

    float num;
    float max;
    
    max = num;

    int count = 0;

    while(count < 5){

        printf("Enter a number : ");
        scanf("%f",&num);

        count += 1;

        if(max > num){

            continue;

        }else{

            max = num;

        }   
    }
    
    printf("Max number is : %f\n",max);

    return 0;
}
