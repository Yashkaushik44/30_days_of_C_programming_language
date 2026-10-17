#include <stdio.h>

int main() {

    int arr[5] = {4,4,5,6,2};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){

        printf("%d ",arr[i]);
        
    }

    arr[0] = 5;
    
    printf("%d\n",arr[0]);
    
    //printf("\n");
    
    return 0;
    
}