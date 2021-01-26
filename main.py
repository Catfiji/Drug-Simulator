# Colours
KNRM = "\x1B[0m"
KRED = "\x1B[31m"
KGRN = "\x1B[32m"
KYEL = "\x1B[33m"
KBLU = "\x1B[34m"
KMAG = "\x1B[35m"
KCYN = "\x1B[36m"

# Variables
class player:
    def __init__(self, money, health, inv, location):
        self.money = money
        self.health = health 
        self.inv = inv 
        self.location = location 
class location:

    def __init__(self, prices):
        self.prices = prices
downtown = location([80,150,10])

inv = [0,0,0]

pla = player(0, 100, inv, downtown)

# Print menu
def print_inv():
    print("⊱ ────── ⋅.   Drug sim   .⋅ ────── ⊰");
    print(f"{KRED}                ❤  {pla.health}")
    print(f"{KGRN}                💲  {pla.money}\n")
    print(f"{KYEL}              𝕴𝖓𝖛𝖊𝖓𝖙𝖔𝖗𝖞")
    print(f"{KCYN}          ╔═══════════════╗\n")
    print(f"{KGRN}            🌿  Weed: {pla.inv[0]}")
    print(f"{KWHT}            🧂  Cocaine: {pla.inv[1]}")
    print(f"{KMAG}            💊  Percocet: {pla.inv[2]}\n")
    print(f"{KCYN}          ╚═══════════════╝",KCYN)
    print(f"{KNRM}⊱ ────── ⋅. Made by Cat .⋅ ────── ⊰",KWHT)    
    print(".  ❤ thanks for playing ❤  .\n")#

# Shop
def shop():
    print(f"[1] Weed price: {pla.location.prices[0]}\n")
    print(f"[2] Cocaine price: {pla.location.prices[1]}\n")
    print(f"[3] Percocet price: {pla.location.prices[2]}\n")
    inp = input()
    
    if inp == "1":
        if pla.money > pla.location.prices[0]:
            pla.inv[1] += 1
            return True
        else:
            return False
# Main
def main():
    print_inv()
    print(f"{KNRM} [1] Buy drugs \n")
    inp = input()

    if inp == "1":
        shop()
    else:
        print("hello")

main()
