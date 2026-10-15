#include <stdio.h>

void double_number(int *x) {

    *x = *x * 2;

}

int main(void) {

    int a = 35;

    double_number(&a);

    printf("%d\n", a);

    return 0;

}
