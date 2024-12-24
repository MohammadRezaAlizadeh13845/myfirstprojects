import msvcrt
def sum(n):
     number_sum=0
     for i in range (1,n):
        if i%3==0 or i%5==0 :
            number_sum+=i
     return number_sum
number=1000   
print ("The sum of all the multiples of 3 or 5 below 1000 is:" , str(sum(number)))
print("Thank you for using our program!")
print("Press any button to exit.")
msvcrt.getch()
#this is the first problem on eulerproject website