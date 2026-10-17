#include <stdio.h>

void analyze(const int arr[7], int size, int *min, int *max, int *sum);

int main() {

    const int arr[7] = {1,2,3,4,5,6,7};

    int size = 7;
    
    int min;

    int max;

    int sum;

    analyze(arr, size, &min, &max, &sum);

    printf("Max is : %d\n", max);

    printf("Min is : %d\n", min);

    printf("Sum is : %d\n", sum);

    return 0;

}

void analyze(const int arr[7], int size, int *min, int *max, int *sum) {

        *max = arr[0];
        *min = arr[0];
        *sum = 0;

    for(int i = 0; i < size; i++) {

        if(*max >= arr[i]) {

        }else{

            *max = arr[i];
        }

        if(*min <= arr[i]) {

        }else{

            *min = arr[i];

        }
        
        *sum += arr[i];
    }   
}


