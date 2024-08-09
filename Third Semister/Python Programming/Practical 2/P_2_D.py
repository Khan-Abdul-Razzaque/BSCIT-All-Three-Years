#2-D. Write a program to accept string from the user and check weater it's pamagram or not.


def isPangram(sentence):
    for i in range(26):
        if chr(i + 65) not in sentence.upper():
            return False
    return True
sentence = input("Enter a sentence: ")
if isPangram(sentence):
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")