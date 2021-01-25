#include <stdio.h>
// change indent sizes for fuck sake i cant read any of this // any day now

// got these colours from some place idk
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

// player
struct player{
    unsigned int money;
    unsigned int health;
    unsigned int location[];
    }; 


// stop minimizing code, you fucking insane asylum patient
int p_inv[] = {0, 0, 0};
int city[] = {100, 200, 11};
int downtown[] = {80, 150, 10};  // replace with locations array that has an array of locations that have arrays of prices
void print_inv(void); 
void shop(void);
void bank(void);
struct player pla = {0, 100, 0}; // Money, Health


// main
int main(void) {
    print_inv(); // moved up
    printf("%s [1] Buy drugs \n",KNRM); // temp-menu 
    int inp = getchar();
    int option1 = 49; // idk how i got this value just roll with it, it means "1" though haha

    if (inp == option1){
        shop();
    } else {
        printf("hello");
    }
    
    return 0;
}

// shop WORKING ON
void shop(void){
    int location[5];

    if (pla.location[0] == 0) {
        location[1] = downtown[0]; // drugs start at array 1
        location[2] = downtown[1];
        location[3] = downtown[2];
    } else if (pla.location[0] == 1) {
        location[1] = city[0];
        location[2] = city[1];
        location[3] = city[2];
    }

    printf("[1] Weed price: %d\n", location[1]);
    printf("[2] Cocaine price: %d\n", location[2]);
    printf("[3] Percocet price: %d\n", location[3]);

}

// print a menu
void print_inv(void){
    printf("⊱ ────── {⋅.   Drug sim   .⋅} ────── ⊰\n");
    printf("%s                ❤  %d\n", KRED, pla.health);
    printf("%s                💲  %d\n\n",KGRN, pla.money);
    printf("%s              𝕴𝖓𝖛𝖊𝖓𝖙𝖔𝖗𝖞\n",KYEL);
    printf("%s          ╔═══════════════╗\n\n",KCYN);
    printf("%s            🌿  Weed: %d\n",KGRN, p_inv[0]);
    printf("%s            🧂  Cocaine: %d\n",KWHT, p_inv[1]);
    printf("%s            💊  Percocet: %d\n\n",KMAG, p_inv[2]);
    printf("%s          ╚═══════════════╝\n",KCYN);
    printf("%s⊱ ────── {⋅. Made by Cat .⋅} ────── ⊰\n",KWHT);
    printf(".❤ thanks for playing ❤.\n"); // cute but remove this line
}

void bank(void) {
    printf("Bank\n");
    printf("    ▟▉▉▉▙\n");
    printf("  ▟▉▉▉▉▉▉▉▙\n");
    printf("▟▉▉▉▉▉▉▉▉▉▉▉▙\n");
    printf("▛▛▛▔▔▔▔▔▔▔▜▜▜ \n");
    printf("▌▌▌  ▓  ▓  ▌▌▌\n");
    printf("▙▙▙▁▞☰☰☰▚▁▟▟▟\n");
    printf("       ▖▖\n");
    printf("    █▖        () \n");
    printf("      ▖█       ▏  \n");
    printf("     █▖     ▚▚▜▛▞▞\n");
}
