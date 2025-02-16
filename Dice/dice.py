import random , math

def simulate_rolls(trials):
    total_rolls=0
    for _ in range(trials):
        rolls=0
        while True:
            rolls+=1
            if random.randint(1,6)==6:
                break
        total_rolls+=rolls
    return math.floor(total_rolls/trials)

trials=int(input("Enter the amount of trials you want this program to have: "))

print(simulate_rolls(trials))