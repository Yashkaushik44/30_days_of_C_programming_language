#include <stdio.h>

int main() {

    int arr[7] = {1,2,3,4,5,6,7};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = size - 1; i >= 0; i-- ) {

        printf("%d", arr[i]);

    }
    
    printf("\n");

    return 0;

}
