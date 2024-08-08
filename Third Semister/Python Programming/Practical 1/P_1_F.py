number = int(input("Enter the number to find the factorial of the number: "))
factorial = 1

for i in range(number):
    factorial *= (i + 1)

print(f"The factorial of the number is {factorial}.")