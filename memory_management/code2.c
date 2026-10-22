#include <stdio.h>

int main(void) {

    int a = 4;
    int b = 5;
    int c = 8;
    int d = 8;

    printf("a = %d ; address = %p\n", a, (void *) &a);
    printf("b = %d ; address = %p\n", b, (void *) &b);
    printf("c = %d ; address = %p\n", c, (void *) &c);
    printf("d = %d ; address = %p\n", d, (void *) &d);



    return 0;

}
