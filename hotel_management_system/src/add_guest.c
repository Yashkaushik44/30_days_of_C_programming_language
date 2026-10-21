#include <stdio.h>
#include "add_guest.h"
#include "all_guests_details_array.h"

void add_guest() {

    int number_of_days_stays;
    char guest_name[50];
    char phone_number[50];

    if(index1 < size_database) {
            
        printf("Enter the Name of the guest : ");
        scanf(" %49[^\n]", guest_name);

        printf("\nEnter the Phone Number of the guest : ");
        scanf("%49s", phone_number);
    
        printf("\nEnter the number of days the guest will stay : ");
        scanf("%d", &number_of_days_stays); 
        
        strcpy(guest_name_list[index1], guest_name);

        strcpy(guest_phone_number_list[index1], phone_number);

        number_of_days_stays_list[index1] = number_of_days_stays;

        index1 ++;

        printf("\nRecord saved!\n");

    }else{

        printf("All rooms full! \n");
            
    }
}
