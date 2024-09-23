# WAP to add new content to the text file and display the text.

file = open("file.txt", "a")
text = "\nMy name is Razzaque"
file.write(text)
file.close()
file = open("file.txt", "r")
fileContent = file.read()
print(fileContent)
file.close()