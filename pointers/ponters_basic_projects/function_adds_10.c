#include <stdio.h>

void add_10(int *p) {

    *p += 10; 

}

int main(void) {

    int a = 4;

    add_10(&a);

    printf("%d\n", a);

    return 0;

}
