#include <stdio.h>

int main() {

    int num1;
    int num2;

    printf("Enter num1 : ");
    scanf("%d",&num1);

    printf("Enter num2 : ");
    scanf("%d",&num2);

    int previous_num1 = num1;

    int *pNum2 = &num2;

    num1 = *pNum2;

    num2 = previous_num1;
    
    printf("\nNum 1 is changed to %d\n",num1);
    printf("Num 2 is changed to %d\n",num2);
    
    return 0;
    
}