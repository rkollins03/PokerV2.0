#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int handone(){


}
int main(){

    char FOLD[25];
    char BET[25];
    char CHECK[25];
    int handone1, handone2, handtwo1, handtwo2, bet1, bet2, card1, card2, card3, card4, card5, buyin, suit1, suit2, suit3, suit4;

    handone();
    
     printf("What's the buy in?: ");
     scanf("%d", &buyin);
     _sleep(1000);
     printf("Player 1");
     printf("                               Player 2\n");

     int random;
     int flipper1 = 1;
     int lower = 1, upper = 52;

     // ---------------------------- HAND 1 PLAYER 1 --------------------------------

    for(flipper1 == 7; flipper1 <= 7; ++flipper1){

        if(flipper1 == 1){
            printf("\nYour 1st card is: ");
        } else {}
        if(flipper1 == 2){
            printf("    Your 1st card is: ");
        } else {}
        if(flipper1 == 3){
            printf("\nYour 2nd card is: ");

        } else {}
        if(flipper1 == 4){
        printf("    Your 2nd card is: ");
        } else {}
        if(flipper1 == 5){
            _sleep(1000);
             printf("\n\nFlipping Cards");
            printf(".");
             _sleep(500);
            printf(".");
             _sleep(500);
            printf(".\n");
            _sleep(250);
            printf("\n");
        }
        if(flipper1 == 6){
            printf("\n");
        }
        if(flipper1 == 7){
            printf("\n");
        } else{}


        srand(time(NULL));
     random = (rand() % (upper-lower+1)) + lower;

     // Aces
     if(random == 1){
         handone1 = 1;
         printf("Ace of Spades    ");
     } else if(random == 2){
         handone1 = 2;
         printf("Ace of Clubs     ");
     } else if(random == 3){
         handone1 = 3;
         printf("Ace of Hearts    ");
     } else if(random == 4){
         handone1 = 4;
         printf("Ace of Diamonds  ");
     }
     // Twos
     if(random == 5){
         handone1 = 5;
         printf("Two of Spades    ");
     } else if(random == 6){
         handone1 = 6;
         printf("Two of Clubs     ");
     } else if(random == 7){
         handone1 = 7;
         printf("Two of Hearts    ");
     } else if(random == 8){
         handone1 = 8;
         printf("Two of Diamonds");
     }
     // Threes
     if(random == 9){
         handone1 = 9;
         printf("Three of Spades  ");
     } else if(random == 10){
         handone1 = 10;
         printf("Three of Clubs   ");
     } else if(random == 11){
         handone1 = 11;
         printf("Three of Hearts  ");
     } else if(random == 12){
         handone1 = 12;
         printf("Three of Diamonds");
     }
     // Fours
     if(random == 13){
         handone1 = 13;
         printf("Four of Spades   ");
     } else if(random == 14){
         handone1 = 14;
         printf("Four of Clubs    ");
     } else if(random == 15){
         handone1 = 15;
         printf("Four of Hearts   ");
     } else if(random == 16){
         handone1 = 16;
         printf("Four of Diamonds ");
     }
     // Fives
     if(random == 17){
         handone1 = 17;
         printf("Five of Spades   ");
     } else if(random == 18){
         handone1 = 18;
         printf("Five of Clubs    ");
     } else if(random == 19){
         handone1 = 19;
         printf("Five of Hearts   ");
     } else if(random == 20){
         handone1 = 20;
         printf("Five of Diamonds ");
     }
     // Six
     if(random == 21){
         handone1 = 21;
         printf("Six of Spades    ");
     } else if(random == 22){
         handone1 = 22;
         printf("Six of Clubs     ");
     } else if(random == 23){
         handone1 = 23;
         printf("Six of Hearts    ");
     } else if(random == 24){
         handone1 = 24;
         printf("Six of Diamonds");
     }
     // Sevens
     if(random == 25){
         handone1 = 25;
         printf("Seven of Spades  ");
     } else if(random == 26){
         handone1 = 26;
         printf("Seven of Clubs   ");
     } else if(random == 27){
         handone1 = 27;
         printf("Seven of Hearts  ");
     } else if(random == 28){
         handone1 = 28;
         printf("Seven of Diamonds");
     }
     // 8
     if(random == 29){
         handone1 = 29;
         printf("Eight of Spades  ");
     } else if(random == 30){
         handone1 = 30;
         printf("Eight of Clubs   ");
     } else if(random == 31){
         handone1 = 31;
         printf("Eight of Hearts  ");
     } else if(random == 32){
         handone1 = 32;
         printf("Eight of Diamonds");
     }
     // 9
     if(random == 33){
         handone1 = 33;
         printf("Nine of Spades   ");
     } else if(random == 34){
         handone1 = 34;
         printf("Nine of Clubs    ");
     } else if(random == 35){
         handone1 = 35;
         printf("Nine of Hearts   ");
     } else if(random == 36){
         handone1 = 36;
         printf("Nine of Diamonds ");
     }
     // 10
     if(random == 37){
         handone1 = 37;
         printf("Ten of Spades    ");
     } else if(random == 38){
         handone1 = 38;
         printf("Ten of Clubs     ");
     } else if(random == 39){
         handone1 = 39;
         printf("Ten of Hearts    ");
     } else if(random == 40){
         handone1 = 40;
         printf("Ten of Diamonds");
     }
     // Jack
     if(random == 41){
         handone1 = 41;
         printf("Jack of Spades   ");
     } else if(random == 42){
         handone1 = 42;
         printf("Jack of Clubs    ");
     } else if(random == 43){
         handone1 = 43;
         printf("Jack of Hearts   ");
     } else if(random == 44){
         handone1 = 44;
         printf("Jack of Diamonds ");
     }
     // Queen
     if(random == 45){
         handone1 = 45;
         printf("Queen of Spades  ");
     } else if(random == 46){
         handone1 = 46;
         printf("Queen of Clubs   ");
     } else if(random == 47){
         handone1 = 47;
         printf("Queen of Hearts  ");
     } else if(random == 48){
         handone1 = 48;
         printf("Queen of Diamonds");
     }
     // King
     if(random == 49){
         handone1 = 49;
         printf("King of Spades   ");
     } else if(random == 50){
         handone1 = 50;
         printf("King of Clubs    ");
     } else if(random == 51){
         handone1 = 51;
         printf("King of Hearts   ");
     } else if(random == 52){
         handone1 = 52;
         printf("King of Diamonds ");
     }

     _sleep(1000);
    }
  
    int b;
    scanf("%d", b);
    return 0;
}