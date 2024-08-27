# Q: WAP to read  the entaire content of a text file.

file = open("file.txt", "r")
fileContent = file.read()
print(fileContent)
file.close()