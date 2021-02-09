#include <stdio.h> // change indent sizes for fuck sake i cant read any of this // any day now 
#include "colors.h"

// player
struct player
{   unsigned int money
;   unsigned int health
;   unsigned int location[]
;
}; 

/*

struct Drug 
{	unsigned int price
;	unsigned char name[100]
;
};

*/


// stop minimizing code, you fucking insane asylum patient
    int p_inv[] = {0, 0, 0}
;   int city[] = {100, 200, 11}
;   int downtown[] = {80, 150, 10} // replace with locations array that has an array of locations that have arrays of prices
;   void print_inv(void)
;   void shop(void)
;   struct player pla = {0, 100, 0} // Money, Health, Location
;   void bank(void)

;

// main
int main(void) 
{   print_inv()
;   printf(reset "[1] Buy drugs \n") // temp-menu 
;   int inp = getchar()
;   int option1 = 49
;   if (inp == option1)
{       shop()
;		print_inv()
;
}   else 
{       printf("hello")
;
}   return 0
;
}

// shop WORKING ON
void shop(void)
{   int location[5]
;	if (pla.location[0] == 0) 
{       location[1] = downtown[0] // drugs start at array 1
;       location[2] = downtown[1]
;       location[3] = downtown[2]
;
}   else if (pla.location[0] == 1) 
{       location[1] = city[0]
;       location[2] = city[1]
;       location[3] = city[2]
;
}   printf("[1] Weed price: %d\n", location[1])
;   printf("[2] Cocaine price: %d\n", location[2])
;   printf("[3] Percocet price: %d\n", location[3])
;	int ll = getchar()
;	if (ll == 49)
{		if (pla.money > location[1])
{			p_inv[0] += 1
;			pla.money = pla.money - location[1]
;
}
}
}

// print a menu
void print_inv(void)
{   printf("⊱ ────── {⋅.   Drug sim   .⋅} ────── ⊰\n")
;   printf("%s                ❤  %d\n", RED, pla.health)
;   printf("%s                💲  %d\n\n",GRN, pla.money)
;   printf("%s              𝕴𝖓𝖛𝖊𝖓𝖙𝖔𝖗𝖞\n",YEL)
;   printf("%s          ╔═══════════════╗\n\n",CYN)
;   printf("%s            🌿  Weed: %d\n",GRN, p_inv[0])
;   printf("%s            🧂  Cocaine: %d\n",WHT, p_inv[1])
;   printf("%s            💊  Percocet: %d\n\n",MAG, p_inv[2])
;   printf("%s          ╚═══════════════╝\n",CYN)
;   printf("%s⊱ ────── {⋅. Made by Cat .⋅} ────── ⊰\n",WHT)
;   printf(".❤ thanks for playing ❤.\n")
;
}

void bank(void) 
{   printf("Bank\n")
;   printf("    ▟▉▉▉▙\n")
;   printf("  ▟▉▉▉▉▉▉▉▙\n")
;   printf("▟▉▉▉▉▉▉▉▉▉▉▉▙\n")
;   printf("▛▛▛▔▔▔▔▔▔▔▜▜▜ \n")
;   printf("▌▌▌  ▓  ▓  ▌▌▌\n")
;   printf("▙▙▙▁▞☰☰☰▚▁▟▟▟\n")
;   printf("       ▖▖\n")
;   printf("    █▖        () \n")
;   printf("      ▖█       ▏  \n")
;   printf("     █▖     ▚▚▜▛▞▞\n")
;

}
