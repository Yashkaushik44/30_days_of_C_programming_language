#include <stdio.h>

int main(void) {

    int x = 67;
    int *pX = &x;

    printf("Before value : %d\n", *pX);

    *pX = 69;

    printf("After value : %d\n", *pX);
        
    return 0;

}
