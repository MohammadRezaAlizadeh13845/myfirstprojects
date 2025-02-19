def read_file(file):
    with open(file, "r") as f:
        for line in f:
            yield line


gen = read_file(r"C:\Users\hp\Desktop\Python\Moshcourse\data.txt")
while True:
    next_or_stop = input("Enter 'next' to see the next line or 'stop' the program: ")
    if next_or_stop == "next":
        print(next(gen).replace("\n", ""))
    elif next_or_stop == "stop":
        break
    else:
        print("Invalid input.")
        continue
print("Thank you for using this program.")
