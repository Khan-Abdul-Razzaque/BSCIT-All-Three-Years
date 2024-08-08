number = int(input("Enter the number to check wether the number is palindrome or not: "))

temp = number
rem = 0
rev = 0

while(temp > 0):
    rem = temp % 10
    rev = rev * 10 + rem
    temp //= 10

if (rev == number):
    print("The number is a palindrome number.")
else:
    print("The number is not a palindrome number.")