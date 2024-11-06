# Write a program to accept mobile number from the user & check wether it is valid or not.

import re
phNumber = input("Enter the mobile number: ")
regularExpression = r'^[9|8|7]\d{9}'

res = re.search(regularExpression, phNumber)
if res:
    print("valid phone.")
else:
    print("invalid phone.")