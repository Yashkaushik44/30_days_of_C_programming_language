#include <stdio.h>
#include "../include/menu.h"
#include "../include/add_guest.h"
#include "../include/all_guests_details_array.h"
#include "../include/check_out_guest.h"
#include "../include/display_guest.h"
#include "../include/guest_search.h"

int index1 = 0;
int choice = 0;

char guest_name_list[50][50];
char guest_phone_number_list[50][50];
int number_of_days_stays_list[50];

int size_database = sizeof(guest_name_list) / sizeof(guest_name_list[0]);

int main(void) {

    while(1) {

        menu();

        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        printf("\n");

        if(choice < 0 || choice > 4) {

            printf("\nPlease select from the above options!\n");

        }else if(choice == 0) {

            printf("\nThanks for using our software!\n");

            break;

        }else if(choice == 1) {

            add_guest();

        }else if(choice == 2) {

            display_all_guest();

        }else if(choice == 3){

            check_out_guest();

        }else{

            guest_search();
        }
    }

    return 0;
}
