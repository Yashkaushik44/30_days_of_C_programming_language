#include <stdio.h>
#include "all_guests_details_array.h"
#include "display_guest.h"

void display_all_guest() {
    
    if(index1 == 0){

        printf("Database is empty!");

    }else{
        for(int z = 0; z < index1; z++) {

            printf("Name of the guest : %s\n", guest_name_list[z]);
            printf("Phone no. : %s\n", guest_phone_number_list[z]);
            printf("No. of days stayed : %d\n\n", number_of_days_stays_list[z]);
        }
    }
}
