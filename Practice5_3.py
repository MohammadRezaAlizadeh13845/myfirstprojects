import msvcrt
    
def check(a):
    factors =[i for i in range (2, 10) if a % i==0]
    return len(factors)>=3

def output (b):
    factors =[i for i in range (2, 10) if b % i==0]
    print (" ".join(map(str, factors[:3])))

number =int(input("Enter a number and the program will provide you with 3 less than 10 factors of your number:"))

print("\n\n\n")

if check(number):
    output(number)
else: 
    print("your number doesn't have kess than 10 factors")

print("\n\n\n")
print("Thank you for using our program!")
print ("Press any key to exit")
msvcrt.getch()
"""I wrote this by myself wothout looking at the program GPT wrote for me. the only
thing I forgot was that when you're assiging a list you should use "=". the other 
important thing I learned was that you shouldn't put the names of the built in 
funtions like "print" on some new functions you're defining in your new program!
if you do so it will crash soon."""