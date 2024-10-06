import msvcrt
first_term=1
second_term=2
third_term=0
number=2
while third_term < 4000000:
    third_term=first_term+second_term
    first_term=second_term
    second_term=third_term
    if third_term%2==0:
        number+=third_term

print("The sum of the even valued terms in Fibonacci sequence before any term exceeding 4 million, is:" , str(number))
print("\n\n\n")
print ("Thank you for using our program!")
print ("Press any button to exit the program.")
msvcrt.getch()