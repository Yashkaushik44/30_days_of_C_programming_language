#include <stdio.h>
#include <string.h>
#include <ctype.h>

// lower function to get expected input
void lower(char *str){

    for(int i = 0; str[i]; i++){

        str[i] = tolower(str[i]);

    }
}

int main(){

    char choice[20];
    char name[25];

    printf("=====================================================");
    printf("\n                WELCOME TO THE ABYSS                \n");
    printf("=====================================================");

    //personalization of character

    printf("\n\nEnter your name : ");
    scanf("%24s", name);

    // story beginning chapter 1

    // characters :
    // Astro Aethel The Seventh(VII) {King of Aethelgard kingdom} {Prideful, Desperate, Kind, Decisive}
    // Hajime Nagumo (Your best Friend) {Prideful, Strong will, Intelligent}
    // High priest {Priest of Aethelgard}{worships the god of light Luminous} {Cunning, Deceptive, Religious, Faithful}

    printf("\n\nChapter 1 : A Day That Wasn't Normal");
    printf("\n\nIt was a normal day and you went to school as usual.\n");
    printf("You sat on the last bench in the class as usual and you were talking to your best friend (Hajime Nagumo) about the movie you watched yesterday.\n");
    printf("Suddenly everything started shaking and everyone in your class, including all your classmates, felt dizzy and became unconscious.\n");
    printf("When you woke up you were not in your school anymore, you were in a chamber where some unknown people dressed as church priests were standing.");
    printf(" Unable to fully process anything, you started to look around your surroundings in disbelief.\nYou saw that you and your classmates were lying on a magic circle.");
    printf(" Your best friend Nagumo was also there.\n");

    // King's speech

    printf("After some time everyone got conscious and stood up. A huge figure stood before you, a king in tarnished gold armor, his eyes heavy with the weight of a dying world.");
    printf(" He looked at each of you, clearing his throat as his voice boomed across the chamber :- \n\"I, Astro Aethel The Seventh(VII), The King of Aethelgard, welcome you heroes to our kingdom! Look around you,");
    printf(" Heroes. You stand in Aethelgard, a realm on the brink of ruin. I know you are confused. I know you feel ripped from your homes. But we had no choice.");
    printf(" Humanity is constantly suffering from the illusion of its own permanence, yet our illusion has finally shattered. An ancient malice has awakened at our borders,");
    printf(" tearing through our armies, devouring our lands, and turning our very skies to ash. We have fought. We have bled. We have sacrificed everything, but mortal swords cannot pierce a cosmic curse.");
    printf(" So, to defeat that malice and protect humanity, we need your help.\"\n");

    // Hajime nagumo statement

    printf("Hajime Nagumo said : \"If you cannot cut through it then how can we do it!?\"\n");
    printf("The king replied : \"Yes, you cannot pierce through it by normal means, but there is a way! The Holy Sword of legends! It can pierce through it. But to wield it you must be blessed with the grace of god or you cannot wield it.\"\n");

    // first choice

    printf("\nWill you help them?(Yes,No) : ");
    scanf("%19s", choice);
    lower(choice);

    // No

    if(strcmp(choice, "no") == 0){

        printf("\nKing : \"I see, so you were no heroes after all. (With a painful and desperate voice) If you cannot help us then we have to send you back home.\"\n\n");
        printf("You returned to your own world on the same day in the evening. Everyone's memory, including yours, of that incident vanished and everyone continued their life as it was, but in your heart you always felt that this day was not normal!\n");

        // ending 1 of ?

        printf("\nYou got the ending 1 of ?\n");

    // Yes

    }else if(strcmp(choice, "yes") == 0){

        printf("\nKing : \"I am very grateful for your help, young heroes of humanity!\"\n");
        printf("\nHigh priest : \"It's time to check everyone's abilities and roles!\"\n\n");

        // Status template of Hajime

        printf("╔══════════════════════════════════════════════════════════════╗\n");
        printf("║                      ◈  STATUS  ◈                            ║\n");
        printf("╠══════════════════════════════════════════════════════════════╣\n");
        printf("║                                                              ║\n");
        printf("║  NAME     : Hajime Nagumo                                    ║\n");
        printf("║                                                              ║\n");
        printf("║  CLASS    : HERO                                             ║\n");
        printf("║  LEVEL    : 01                                               ║\n");
        printf("║                                                              ║\n");
        printf("║  TITLE    : The Chosen One                                   ║\n");
        printf("║                                                              ║\n");
        printf("║  ════════════════  ATTRIBUTES  ════════════════              ║\n");
        printf("║  INT  [██████████████] 14                                    ║\n");
        printf("║  STR  [████████████████] 15                                  ║\n");
        printf("║  AGI  [██████████] 10                                        ║\n");
        printf("║  VIT  [██████████] 10                                        ║\n");
        printf("║  LUK  [??????????] ???                                       ║\n");
        printf("║                                                              ║\n");
        printf("║  ══════════════════  STATUS  ══════════════════              ║\n");
        printf("║                                                              ║\n");
        printf("║  HP   ████████████████████  100 / 100                        ║\n");
        printf("║  MP   ????????????????????  ??? / ???                        ║\n");
        printf("║                                                              ║\n");
        printf("║  ══════════════════  SKILLS  ══════════════════              ║\n");
        printf("║                                                              ║\n");
        printf("║  [ ??? ]                                                     ║\n");
        printf("║  [ ??? ]                                                     ║\n");
        printf("║                                                              ║\n");
        printf("╚══════════════════════════════════════════════════════════════╝\n");

        printf("\nAfter seeing Hajime Nagumo's status plate everyone was shocked!\n");
        printf("King : \"(Happy and relieved) We got our hero!!! Humanity is saved at last!\"\n\n");

        printf("After seeing your best friend you became very happy and congratulated him.\n");
        printf("Hajime : \"(With a very prideful and happy voice) I was always a hero but now I got a title!\"\n");
        printf("Now, it was your turn to check your status!\n\n");

        // Status template of the user

        printf("╔══════════════════════════════════════════════════════════════╗\n");
        printf("║                      ◈  STATUS  ◈                            ║\n");
        printf("╠══════════════════════════════════════════════════════════════╣\n");
        printf("║                                                              ║\n");
        printf("║  NAME     : %-49s║\n", name);
        printf("║                                                              ║\n");
        printf("║  CLASS    : UNKNOWN                                          ║\n");
        printf("║  LEVEL    : 01                                               ║\n");
        printf("║                                                              ║\n");
        printf("║  TITLE    : Hero                                             ║\n");
        printf("║                                                              ║\n");
        printf("║  ════════════════  ATTRIBUTES  ════════════════              ║\n");
        printf("║  INT  [████████████] 12                                      ║\n");
        printf("║  STR  [██████████] 10                                        ║\n");
        printf("║  AGI  [████████] 08                                          ║\n");
        printf("║  VIT  [██████████] 10                                        ║\n");
        printf("║  LUK  [??????????] ???                                       ║\n");
        printf("║                                                              ║\n");
        printf("║  ══════════════════  STATUS  ══════════════════              ║\n");
        printf("║                                                              ║\n");
        printf("║  HP   ████████████████████  100 / 100                        ║\n");
        printf("║  MP   ????????????????????  ??? / ???                        ║\n");
        printf("║                                                              ║\n");
        printf("║  ══════════════════  SKILLS  ══════════════════              ║\n");
        printf("║                                                              ║\n");
        printf("║  [ ??? ]                                                     ║\n");
        printf("║  [ ??? ]                                                     ║\n");
        printf("║                                                              ║\n");
        printf("╚══════════════════════════════════════════════════════════════╝\n");

    }else{

        // anything other than yes or no

        printf("\nThe king did not understand your answer. Please run the game again and type Yes or No.\n");

    }

    return 0;

}
