#include <stdio.h>

int main(){

    float basic_salary;
    
    float year_of_experience;

    printf("Enter your Basic Salary : ");
    scanf("%f",&basic_salary);

    printf("Enter your Year of Experience : ");
    scanf("%f",&year_of_experience);

    printf("Your Basic salary is : %.2f\n",basic_salary);
    
    if (year_of_experience < 2){

        printf("Bonus percentage : 5%%\n");

        printf("Bonus amount : %.2f\n",basic_salary*5/100);

        printf("Final Salary : %.2f\n",basic_salary + (basic_salary*5/100));

    }else if(year_of_experience >= 2 && year_of_experience <= 5){

        printf("Bonus percentage : 10%%\n");

        printf("Bonus amount : %.2f\n",basic_salary*10/100);

        printf("Final Salary : %.2f\n",basic_salary + (basic_salary*10/100));
        
    }else{ 

        printf("Bonus percentage : 20%%\n");

        printf("Bonus amount : %.2f\n",basic_salary*20/100);

        printf("Final Salary : %.2f\n",basic_salary + (basic_salary*20/100));

    }

    return 0;

}
