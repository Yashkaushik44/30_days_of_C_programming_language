#include <stdio.h>

int main() {

    // array decleration 
    int ar[4];

    // variable decleration
    int max;
    int sum = 0;
    int mul = 1;
    int choice;
    int num;
    int count = 0;

    // size of array
    int size = sizeof(ar) / sizeof(ar[0]);

    while(1) {

        //menu
        printf("\n1.Add int value to the array\n");
        printf("2.Save the array and procced to the code\n");

        printf("Enter choice : ");
        scanf("%d",&choice);
        
        // error handling
        if(choice < 1 || choice > 2){

            printf("\nSomething went wrong!\n");

        // exit
        }else if(choice == 2) {

            printf("Procceding with the code!\n");

            break;

        // user array input=
        }else if(choice == 1) {

            if(count < size) {
                
            printf("Enter the number : ");
            scanf("%d",&num);

            ar[count] = num;

            count++;
            
            }else{
    
                printf("Array is full!");
            }
        }
    }
    
    // accessing every element in the array 
    for(int i = 0; i < count; i++) {

        sum += ar[i];

        mul *= ar[i];

        max = ar[i];

        if(max >= ar[i]) {

            continue;

        }else{

            max = ar[i];

        }
    }
    
    // print max value
    printf("Max is : %d\n",max);

    // print the sum of array
    printf("Sum is : %d\n",sum);

    // print the multiplication of array
    printf("Multiply is : %d\n", mul);

    return 0;

}
