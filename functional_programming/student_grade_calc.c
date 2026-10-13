#include <stdio.h>

int main(){

    // function declearation

    float calculatePercentage(float a,float b,float c,float d,float e);
    char calculateGrade(float percentage);

    // variables 

    float maths_marks;
    
    float physics_marks;
    
    float chemistry_marks;
    
    float english_marks;
    
    float computer_science_marks;
    
    float percentage;
    
    char grade;
    
    
    int choice;
    
    float result;

    while(1){

        //menu

        printf("Choose from the below : \n");
        
        printf("1.Calculate Percentage\n");
        printf("2.Calculate Grade\n");
        printf("0.Exit");

        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        if(choice == 0){

            printf("\n\nThanks for using the software!\n");
            
            break;

        }else if(choice < 0 || choice > 3){

            printf("Something went wrong!");

            continue;

        }

        printf("Enter your maths marks : ");
        scanf("%f",&maths_marks);
        
        printf("\nEnter your physics marks : ");
        scanf("%f",&physics_marks);

        printf("\nEnter your chemistry marks : ");
        scanf("%f",&chemistry_marks);

        printf("\nEnter your  english marks : ");
        scanf("%f",&english_marks);

        printf("\nEnter your computer marks marks : ");
        scanf("%f",&computer_science_marks);

        if(choice == 1){

            result = calculatePercentage(maths_marks,physics_marks,chemistry_marks,english_marks,computer_science_marks);

            printf("\nYour percentage is : %.2f\n\n",result);

        }else{

            percentage = calculatePercentage(maths_marks,physics_marks,chemistry_marks,english_marks,computer_science_marks);

            grade = calculateGrade(percentage);

            printf("\nYour grade is : %c\n\n",grade);
        }
    }

    return 0;

}

float calculatePercentage( float maths_marks,
                float physics_marks,
                float chemistry_marks,
                float english_marks,
                float computer_science_marks){return (maths_marks + chemistry_marks + english_marks + physics_marks + computer_science_marks) / 5;}

char calculateGrade(float percentage){

    if(percentage >= 0 && percentage < 37 ){

        return 'F';

    }else if(percentage >= 37 && percentage <= 39){

        return 'E';

    }else if (percentage >= 40 && percentage <= 49){

        return 'D';

    }else if(percentage >= 50 && percentage <= 59){

        return 'C';

    }else if(percentage >= 60 && percentage <= 69){

        return 'B';

    }else if(percentage >= 70 && percentage <= 89){

        return 'A';

    }else{

        return 'O';

    }
}
