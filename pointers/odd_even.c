#include <stdio.h>

int main(){
    
    int no;
    int *pNo = &no;

    printf("Enter the number : ");
    scanf("%d",&no);

    if(no % 2 == 0){
        
        printf("It's even\n");
    }else{
        printf("It's odd\n");
    }

    return 0;
}