#include <stdio.h>

int main(void) {

    FILE *fptr;

    fptr = fopen("Testing_File_Handling.txt","a");

    fprintf(fptr, "Hello World\n");

    fclose(fptr);

    return 0;

}
