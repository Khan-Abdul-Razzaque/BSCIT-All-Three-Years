num1 = int(input("Enter the number 1: "))
num2 = int(input("Enter the number 2: "))
choice = input("Chose an operator(+, -, *, /): ")
if choice == '+':
    print(f"The sum of {num2} and {num2} is: {num1 + num2}")
elif choice == '-':
    print(f"The subtraction of {num1} and {num2} is {num1 - num2}")
elif choice == '*':
    print(f"The multiplication of {num1} and {num2} is : {num1 * num2}")
elif choice == '/':
    print(f"The division of {num1} and {num2} is {num1 / num2}")
else:
    print("Please enter a valid operato !!!")