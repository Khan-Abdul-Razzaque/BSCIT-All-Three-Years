number = int(input("Enter an integer to check wether the number is armstrong number or not: "))
temp = number
noOfDigits = 0
arms = 0

while temp > 0:
    noOfDigits += 1
    temp //= 10
    
temp = number
while temp > 0:
    arms += ( temp % 10 ) ** noOfDigits
    temp //= 10

if (arms == int(number)):
    print("The number is an armstrong number.")
else:
    print("The number is not an armstrong number.")