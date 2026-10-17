#include <stdio.h>

void data(int age, float height, char name[], char gender[]);

int main() {

    int age = 18;
    
    float height = 6.1;

    char name[5] = "Yash";

    char gender[5] = "Male";

    data(age, height, name, gender);

    return 0;
}

void data(int age, float height, char name[], char gender[]) {
    
    printf("Age is : %d\n", age);

    printf("Height is : %.2f\n", height);

    printf("Name is : %s\n", name);

    printf("Gender is : %s\n", gender);

}
