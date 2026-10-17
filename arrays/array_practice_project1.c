#include <stdio.h>

int main() {

    int arr[7] = {1,2,2,1,4,5,4};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {

        for(int j = i + 1; j < size; j++) {

            if(arr[i] == arr[j]) {

                printf("Deleting the dublicate word!\n");

                for(int z = j; z < size - 1; z++) {

                    arr[z] = arr[z + 1];

                }

                size --;

                j --;


            }else{

                continue;

            }
        }
    }

    for(int a = 0; a < size; a++) {

        printf("%d\n",arr[a]);

    }

    return 0;

}
