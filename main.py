# Colours
KNRM = "\x1B[0m"
KRED = "\x1B[31m"
KGRN = "\x1B[32m"
KYEL = "\x1B[33m"
KBLU = "\x1B[34m"
KMAG = "\x1B[35m"
KCYN = "\x1B[36m"
KWHT = "\x1B[37m"

# Variables
player_health = 100
player_money = 0
p_inv = [0,0,0]

# Print menu
def print_inv():
    print("⊱ ────── ⋅.   Drug sim   .⋅ ────── ⊰");
    print(f"{KRED}                ❤  {player_health}")
    print(f"{KGRN}                💲  {player_money}\n")
    print(f"{KYEL}              𝕴𝖓𝖛𝖊𝖓𝖙𝖔𝖗𝖞")
    print(f"{KCYN}          ╔═══════════════╗\n")
    print(f"{KGRN}            🌿  Weed: {p_inv[0]}")
    print(f"{KWHT}            🧂  Cocaine: {p_inv[1]}")
    print(f"{KMAG}            💊  Percocet: {p_inv[2]}\n")
    print(f"{KCYN}          ╚═══════════════╝",KCYN)
    print(f"{KWHT}⊱ ────── ⋅. Made by Cat .⋅ ────── ⊰",KWHT)
	print(".  ❤ thanks for playing ❤  .\n")

# Shop
def shop():
    print("hello")

# Main
def main():
    inp = input()
    if inp == "1":
        print_inv()
    else:
        print("hello")

main()
