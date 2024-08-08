number = input("Enter an integer to check wether the number is armstrong number or not: ")
noOfDigits = len(number)
arms = 0

for i in range(noOfDigits):
    arms += int(number[i]) ** noOfDigits

if (arms == int(number)):
    print("The number is an armstrong number.")
else:
    print("The number is not an armstrong number.")