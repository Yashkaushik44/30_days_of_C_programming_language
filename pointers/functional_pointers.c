#include <stdio.h>

int main() {

    int sum(int a, int b);

    int num1;
    int num2;

    printf("Enter num1 : ");
    scanf("%d",&num1);

    printf("Enter num2 : ");
    scanf("%d",&num2);

    int (*p)(int, int);

    p = sum;

    printf("Sum is : %d\n",p(num1,num2));

     return 0;
}

int sum(int num1, int num2){

    return num1 + num2;
}

// do variable ke sath krke dekhna hai. 
// Answer = nhi, kyuki ye pointer sirf ek pre defined function ko use kr skta hai aur self calculation nhi kr skta like num1 + num2
