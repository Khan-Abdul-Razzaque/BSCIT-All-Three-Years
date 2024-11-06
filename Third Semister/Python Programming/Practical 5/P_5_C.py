# WAP to read last n lines from the given text file.
lines = int(input("Enter the line number: "))
file = open("file.txt", "r")
filecontent = file.readlines()
for i in range(lines, 0, -1):
    print(filecontent[-i])
file.close()