#include <stdio.h>
#include <ctype.h>

 void upper(char *pMessage){

        for(int z = 0; pMessage[z]; z++){

            pMessage[z] = toupper(pMessage[z]);
            
        }
    }


int main(){

    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_=";
    
    char message[50];

       
    printf("Enter your message in no more then 50 words : ");
    scanf("%49[^\n]",message);
    
    for(int i = 0; message[i]; i++){

        upper(&message[i]);
        
        for(int x = 0; alphabet[x]; x++){

            if(alphabet[x] != message[i]){

                continue;
                
            }else{

                printf("%d",x + 1);

                continue;
                
            }
        }      
    }

    printf("\n");
    
    return 0;
    
}
