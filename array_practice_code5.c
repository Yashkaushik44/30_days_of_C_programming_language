#include <stdio.h>

int main() {

    int arr[4] = {1,2,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;

    for(int i = 0; i < size; i++) { 

        printf("Enter a number : ");
        scanf("%d",&num);

        arr[i] = num;

    }
    
    for(int j = 0; j < size; j++) { 

    printf("%d\n",arr[j]);

    }

    return 0;

}
