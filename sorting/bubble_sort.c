#include <stdio.h>

int main() {

    int arr[] = {1,3,5,2,9};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size - 1; i++) {

        for(int j = 0; j < size - 1 - i; j++) {

            if(arr[j] > arr[j + 1] ) {

                int temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }
        }
    }

    for(int z = 0; z < size; z++) {

        printf("%d",arr[z]);
    }

    printf("\n");

    return 0;

}
