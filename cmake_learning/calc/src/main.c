#include <stdio.h>
#include "add.h"
#include "sub.h"

int main(void) {

    int a = 10;
    int b = 5;

    int sum = add(a, b);
    int subtraction = sub(a, b);

    printf("%d\n", sum);
    printf("%d\n", subtraction);

    return 0;

}
