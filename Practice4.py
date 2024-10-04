import msvcrt
def is_prime (n):
    if n < 2:
        return False
    for i in range (2 , int(n ** 0.5)+1 ):
        if n%i == 0:
             return False
    return True
count =0
group_size=5


number = int(input("Enter a number and I will list all the prime numbers up to your number:"))

print("\n\n\n")
print("the prime numbers up to",number , "are:")

for b in range(2,number+1):
    if is_prime(b):
        print (b, end='    ')
        count +=1

        if count==group_size:
            print () 
            count = 0 
"""the code in the 24th line creates a new line so that the remaining numbers can get printed
  in here but it only gets run if the number of the numbers match the group size.            
 if it doesn't match the group size (theere are remaining words that are less than
  the group size like there are 3 words) then it doesn't get to the next line because
  a new line isn't printed for the last remaining words. 
and there already exists a line in which words can get printed in but for the words
  that are leftover or comin the nexxt line, you have to print a new line. that's why
  this line is written after the words are printed."""



if count >0 :             
    print() 
    """this part isn't written in the foor loop because you don't want a new line get 
    produced everytime the loop repeats its actions. you want this to get produced after 
     the loop is done (if the words are too many the loop doesn't end) and then put the 
     leftover words in the new line."""

print("\n\n\n\n\n\n")


print ("Thank you for using our program")
print("Press any key to exit")
msvcrt.getch()