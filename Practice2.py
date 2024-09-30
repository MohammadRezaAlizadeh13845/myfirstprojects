import msvcrt 
print ("the following list presents the participants' names in our competition:")
for b in ['one: jamie', 'two: karl', 'three: joseph', 'four: jack', 'five: billie' ]:
    print ("participant number" , b) 
    #this is one of way of listing the participants
print("\n\n\n\n\n\n")  

print ("press any key for the list to be shown again but this time by real numbers")
msvcrt.getch()


for number,name in zip (range(1,10) , ["jamie" , "karl" , "joseph" , "jack" , "billie"] ):
    print ("number" , str(number) + ":" , name)
    



print ("press any key to exit")
msvcrt.getch()