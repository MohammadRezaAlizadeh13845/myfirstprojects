#we want to create a for loop using 2 functions that assigns each a number representing their position in line.
import msvcrt
def number_allocating (number , name):
    print (str(number) , name)
def costs (price):
    print ("you should pay" , str(10*price) , "dollars")


input("press enter to see how many people are waiting in line and how much they should pay")


for number,name in zip (range(1,6) , ["jake","mattthew","katy","selena","you"]):
    number_allocating (number , name)
    costs (number)

print ("\n\n\n\n\n")
print ("press any key to exit")
msvcrt.getch()