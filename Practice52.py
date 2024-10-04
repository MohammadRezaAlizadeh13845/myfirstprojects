import msvcrt

def has_three_factors(n):
    factors = [i for i in range(2, 10) if n % i == 0]
    return len(factors) >= 3

def list_factors(n):
    factors = [i for i in range(2, 10) if n % i == 0]
    print(" ".join(map(str, factors[:3])))
    

number = int(input("Enter a number and we will provide you with 3 less than 10 factors for your number: "))
print("\n\n\n")

if has_three_factors(number): 
    list_factors(number)
else:
    print("Your number doesn't have 3 factors less than 10")

print("\n\n\n")
print("Thank you for using our program!")
print("Press any key to exit the program.")
msvcrt.getch()
#this program was made by chatgpt(with a little alteration and modification by me). I asked chatgpt 
#that how can I improve and optimize my code and it gave me this code (based on the explanation I gave
#it about what is the program about). I learned about list comprehension (which is used in this program) 
#and I am going to rewrite this program only by myself again (using comprehension list and length and map
#and join funcions(basically everythin I learned from gpt on how I can optimize my codes)).