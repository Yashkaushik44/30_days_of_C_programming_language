#include <stdio.h>
#include "all_guests_details_array.h"
#include "guest_search.h"

void guest_search() {
    
    int room_no;

    printf("Enter the room no : ");
    scanf("%d",&room_no);
    
    printf("\n");

    int index_room_no = room_no - 1;

    if(index1 == 0) {

        printf("Database empty! \n");
    
    }else if(room_no < 1 || room_no > size_database) {

        printf("Invalid room no.! \n");
    
    }else if(guest_name_list[index_room_no] == NULL) {

        printf("No one in the room! \n");

    }else{

        printf("Name of the guest : %s\n", guest_name_list[index_room_no]);
        printf("Phone no. of the guest : %s\n", guest_phone_number_list[index_room_no]);
        printf("No. of day stays : %d\n", number_of_days_stays_list[index_room_no]);

    }
}
