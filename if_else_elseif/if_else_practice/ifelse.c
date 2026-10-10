#include <stdio.h>

int main(){
    
    int age=-1;
    int *pAge = &age;

    if(age>=18){
        printf("You can vote\n");

    }else if (age<18 && age>0){
        printf("you cannot vote\n ");

    }
    else{
        printf("something went wrong\n");
    }
    return 0;
}