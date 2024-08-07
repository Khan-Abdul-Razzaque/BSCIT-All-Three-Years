#2-D. Write a program to accept string from the user and check weater it's pamagram or not.


def isPangram(string):
    for i in range(26):
        if chr(i + 65) not in string.upper():
            return False
    return True
string = input("Enter a string: ")
funcRes = isPangram(string)
if funcRes:
    print("The string is a pangram.")
else:
    print("The string is not a pangram.")