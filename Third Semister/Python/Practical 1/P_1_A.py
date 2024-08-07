import datetime as dt

currentYear = dt.datetime.now().year

name = input("Enter your name: ")
age = int(input("Enter your age: "))

DOB = currentYear - age

print(f"your D.O.B is {DOB} and in {DOB + 100} you will be of 100 years old.")