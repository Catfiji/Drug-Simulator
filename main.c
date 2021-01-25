#include <stdio.h>
// change indent sizes for fuck sake i cant read any of this

// got these colours from some place idk
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

// stop minimizing code, you fucking insane asylum patient
int player_money = 0x00, player_health = 0x64, p_inv[] = {0, 0, 0};
void print_inv(void); 
void shop(void);

// main
int main(void) {
    int inp = getchar();
    int option1 = 49; // idk how i got this value just roll with it, it means "1" though haha
    
    // replace with menu
    if (inp == option1){
        print_inv(); // move up
    } else {
        printf("hello");
    }
    
    return 0;
}

// shop
void shop(void){printf("hello");} // STOP

// print a menu
void print_inv(void){
    printf("⊱ ────── {⋅.   Drug sim   .⋅} ────── ⊰\n");
    printf("%s                ❤  %d\n", KRED,player_health);
    printf("%s                💲  %d\n\n",KGRN, player_money);
    printf("%s              𝕴𝖓𝖛𝖊𝖓𝖙𝖔𝖗𝖞\n",KYEL);
    printf("%s          ╔═══════════════╗\n\n",KCYN);
    printf("%s            🌿  Weed: %d\n",KGRN, p_inv[0]);
    printf("%s            🧂  Cocaine: %d\n",KWHT, p_inv[1]);
    printf("%s            💊  Percocet: %d\n\n",KMAG, p_inv[2]);
    printf("%s          ╚═══════════════╝\n",KCYN);
    printf("%s⊱ ────── {⋅. Made by Cat .⋅} ────── ⊰\n",KWHT);
    printf(".❤ thanks for playing ❤.\n");
}
