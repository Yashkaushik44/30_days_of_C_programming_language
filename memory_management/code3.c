#include <stdio.h>

int main(void) {

    int a = 4;

    int *pA = &a;

    printf("The value of a is : %d\n", a);
    printf("address of a = %p\n", (void *) &a);
    printf("p = %p\n", (void *) pA);

    return 0;

}
