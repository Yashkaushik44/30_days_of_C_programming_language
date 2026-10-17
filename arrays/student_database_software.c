#include <stdio.h>
#include <string.h>

int main() {

    // variable decleration 
    int choice;
    int count = 0;
    char name_input[30];
    char class_input[10];
    float total_percentage_input;

    // arrays
    char name[30][30];
    int size_of_name = sizeof(name) / sizeof(name[0]);
    
    char class[30][10];
    int size_of_class = sizeof(class) / sizeof(class[0]);

    float total_percentage[30];
    int size_of_total_percentage = sizeof(total_percentage) / sizeof(total_percentage[0]);

    
    while(1) {

        // welcome
        printf("Welcome to the student database manager!\nPlease choose from the bellow options!\n\n");
    
        // menu
        printf("1.Add record\n"); 
        printf("2.Delete record\n");
        printf("3.Search record\n");
        printf("4.Display all records\n");
        printf("5.Exit\n");

        // User choice
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        printf("\n");

        // error handling 
        if(choice < 1 || choice > 5) {

            printf("\nSomething went wrong\n");

        // exit
        }else if(choice == 5 ) {

            printf("\nThanks for using our database!\n");

            break;

        // code logic
        }else if(choice == 1){

            if(count < size_of_name) {
                
                printf("Enter the name of the student : ");
                scanf("%29s",name_input);

                printf("Enter the class and section of the student(ex: 12A) : ");
                scanf("%9s",class_input);

                printf("Enter total percentage of the student : ");
                scanf("%f",&total_percentage_input);

                strcpy(name[count], name_input);

                strcpy(class[count], class_input);

                total_percentage[count] = total_percentage_input;

                count++;

                printf("\nData saved!\n\n");
            
            }else{
    
                printf("Database is full!\n");

            }
        
        
        }else if(choice == 2) {
        
            int pos;

            if(count == 0) {

                printf("Database is empty!\n");

            }else{
                
                printf("Enter roll number: ");
                scanf("%d",&pos);

                if(pos < 1 || pos > count) {
                
                    printf("Invalid roll number!\n");

                }else{
                    int index_of_deletion = pos - 1;
            
                    printf("\nDeleting the record!\n");

                    for(int i = index_of_deletion; i < count - 1; i++) {

                        strcpy(name[i], name[i + 1]);

                        strcpy(class[i], class[i + 1]);
                    
                        total_percentage[i] = total_percentage[i + 1];
                    }

                    count --;
                    printf("Record Deleted!\n");

                }
            }
        
        }else if(choice == 3) {

            int roll_no;
            
            if(count == 0) {

                printf("Database is empty!\n");

            }else{

                printf("Enter the roll no. of the student : ");
                scanf("%d",&roll_no);
                
            
                if(roll_no < 1 || roll_no > count) {

                    printf("Roll no invalid!\n");

                }else{
            
                    int index = roll_no - 1;

                    printf("\nName : %s\n",name[index]);

                    printf("Class : %s\n",class[index]);

                    printf("Total percentage : %.2f\n\n",total_percentage[index]);
                }
            }

        }else if(choice == 4) {

            for(int j= 0; j < count; j++) {

                printf("Name : %s\n",name[j]);

                printf("Class : %s\n",class[j]);

                printf("Total percentage : %.2f\n\n",total_percentage[j]);

            }
        }
        
        printf("\n");
        
    }

    return 0;

}
