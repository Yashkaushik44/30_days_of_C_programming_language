#include <stdio.h>
#include <string.h>
#include "all_guests_details_array.h"
#include "check_out_guest.h"

void check_out_guest() {

    int check_out_number;

        if(index1 == 0) {

        printf("Database is empty! \n");

    }else{

        printf("Enter the check out number : ");
        scanf("%d", &check_out_number);

        if(check_out_number < 1 || check_out_number > size_database) {

            printf("\nNot a valid room number!\n");

        }else{

            int room_of_checkout_index = check_out_number - 1;

            printf("\nChecking out the guest!\n");

            for(int i = room_of_checkout_index; i < index1 - 1; i++) {

                strcpy(guest_name_list[i], guest_name_list[i + 1]);

                strcpy(guest_phone_number_list[i], guest_phone_number_list[i + 1]);

                number_of_days_stays_list[i] = number_of_days_stays_list[i + 1];
            }

            index1 --;

            printf("\nCheckout successful! \n");
        }
    }
}
