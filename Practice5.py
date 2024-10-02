import msvcrt

def check(n):
    limitation=3
    count=0
    factors =False
    for i in range (2,10):
        if n%i==0:
            count += 1
            if count >=limitation:
                factors = True
                break
            else:continue
    return factors        

def output (n):
    count=0
    limitation=3
    for i in range (2,10):
        if n%i==0:
            print (i , end=' ')
            count +=1
            if count==limitation:
                break    

number = int(input("Enter a number and we will provid you with 3 factors less than 10 that could be factors of your number:"))

print("\n\n\n")

if check(number): 
    output(number)
else: print("your number doesn't have 3 factors less than 10")    

    


print ("\n\n\n")
print ("Thank you for using our program!")
print("Press any button that you see to exit from the program.")
msvcrt.getch ()

#everything on this program was written by me and now I want to make a revised version of it to optimize my codes