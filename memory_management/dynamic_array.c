#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if(arr == NULL) {

        return 1;

    }

    for(int i = 0; i < n; i++) {

        *(arr + i) = i + 10;

    }

    for(int i = 0; i < n; i++) {

        printf("%d\n", *(arr + i));

    }

    printf("\n");

    return 0;

}
