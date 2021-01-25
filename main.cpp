#include <iostream>
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
// C++ but i stole everything from C and just added a class
void print_inv();

class player {
    public:
        int money;
        int health;
};

// variabls
int p_inv[] = {0,0,0};
player pla {0, 100};

// main
int main() {
    int inp = getchar();
    int option1 = 49;
    if (inp == option1){
        print_inv();
    } else {
        printf("hello");
    }
    return 0;
}

//shop
void shop(){std::cout << "Hello";}

// print menu
void print_inv(){
    printf("⊱ ────── {⋅.   Drug sim   .⋅} ────── ⊰\n");
    printf("%s                ❤  %d\n", KRED,pla.health);
    printf("%s                💲  %d\n\n",KGRN, pla.money);
    printf("%s              𝕴𝖓𝖛𝖊𝖓𝖙𝖔𝖗𝖞\n",KYEL);
    printf("%s          ╔═══════════════╗\n\n",KCYN);
    printf("%s            🌿  Weed: %d\n",KGRN, p_inv[0]);
    printf("%s            🧂  Cocaine: %d\n",KWHT, p_inv[1]);
    printf("%s            💊  Percocet: %d\n\n",KMAG, p_inv[2]);
    printf("%s          ╚═══════════════╝\n",KCYN);
    printf("%s⊱ ────── {⋅. Made by Cat .⋅} ────── ⊰\n",KWHT);
    printf(".❤ thanks for playing ❤.\n");
}
