#include <stdio.h>

int main() {

    int arr[7] = {1,2,2,3,1,5,3};

    int size = 7;

    int arr1[size];

    int max;

    for(int i = 0; i < size; i++ ) {
    
        max = arr[i];

        arr1[i] = arr[i];

        if(max >= arr[i]) {

            continue;

        }else{

            max = arr[i];
            
        }

    }

    for(int j = 0; j < size - 1; j++) {

        if(arr1[j] == max) {

            arr1[j] = arr1[j+1];
        
        }else{

            continue;
            
        }
        j --;

    }


    for(int z = 0; z < size; z++ ) {
    
        max = arr1[z];

        if(max >= arr1[z]) {

            continue;

        }else{

            max = arr1[z];
            
        }

    }
    printf("%d\n",max);


    return 0;

}
