# WAP to demonstrate exception handling by handling any three exceptions.


# Exception 1
try:
    file = open("abc.txt", "r")
    print(file.read()) 
except FileNotFoundError:
    print("File not found.")

# Exception 2
try:
    num1 = 10
    num2 = 2
    ans = num1 / num2
except ZeroDivisionError:
    print("You can not divide by zero.")
else:
    print(ans)

# Exception 3
try:
    list = [1, 2, 3, 4, 5]
    print(list[10])
except IndexError:
    print("Index gone out of range.")