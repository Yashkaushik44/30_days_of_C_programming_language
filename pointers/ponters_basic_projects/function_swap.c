#include <stdio.h>

void swap(int *a, int *b) {

    int temp = *a;

    *a = *b;
    *b = temp;

}

int main(void) {

    int x = 10, y = 3;

    swap(&x, &y);

    printf("the value of x is : %d\nthe value of y is : %d\n", x,y);

    return 0;

}
