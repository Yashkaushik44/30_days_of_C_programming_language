#include <stdio.h>

void copy(int *x){

    *x = 100;
}
int main(void) {

    int a = 19;

    copy(&a);

    printf("%d\n", a);

    return 0;

}
