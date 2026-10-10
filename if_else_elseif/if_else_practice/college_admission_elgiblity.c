#include <stdio.h>

int main(){

    float class_12_percentage;
    
    float math_marks;

    float physics_marks;
    
    float jee_percentile;

    printf("Enter class 12 percentage : ");
    scanf("%f",&class_12_percentage);

    printf("Enter maths marks : ");
    scanf("%f",&math_marks);

    printf("Enter physics marks : ");
    scanf("%f",&physics_marks);

    printf("Enter jee percentile : ");
    scanf("%f",&jee_percentile);

    if(class_12_percentage < 60){

        printf("You are not eligible\n");

    }else if(class_12_percentage >= 60){

        if(math_marks < 50 || physics_marks < 50 || jee_percentile < 70){

            printf("You are not eligible\n");

        }else if(math_marks >= 50 && physics_marks >= 50 && jee_percentile >= 70){
  
            printf("You are Elgible!\n");
    
        }

    }else{

        printf("Conditional Eligiblity\n");

    }

    return 0;

}
