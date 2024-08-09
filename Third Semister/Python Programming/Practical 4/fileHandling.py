# Open the file
fobj = open("file.txt", "r")
#Read the file
# print(fobj.readline())
#Close the file
list = fobj.readlines()
for i in range(len(list)):
    list[i] = list[i].replace("\n", "")

print(list)
fobj.close()
print("\n********************************************\n")