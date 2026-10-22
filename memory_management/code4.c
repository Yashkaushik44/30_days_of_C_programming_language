#include <stdio.h>

int main(void) {

    int x = 8;
    int *pX = &x;

    printf("p = %p\n", (void *) pX);
    printf("*p = %d\n", *pX);

    return 0;

}
