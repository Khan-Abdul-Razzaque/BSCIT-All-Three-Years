# WAP to accept registration details from the user like first name last name email id mobile number and DOB, check the validity of input if the entered data is valid register the user with user id as email id and one time randomly generated password with the cobination of first name last name and DOB.

import re, random

regExpress = {
    "firstName": r"[a-z]{0, 20}",
    "lastName": r"[a-z]{0, 20}",
    # "dob": r"[0-3]{1}[0-9]{1}/[0-12]/[1-2][0-9][0-9][]",
    "PhNumber": r"^[9|8|7]\d{9}$",
    "emailId": r"^[a-z]\w{8,20}@[a-z]{3,6}.[a-z]{2,3}$"
}


firstName = input("Enter your name first name: ")
lastName = input("Enter you last name: ")
dob = input("Enter your date of birth: ")
emailId = input("Enter you email id: ")
phnumber = input("Enter your mobile number: ")

# res = re.search(regExpress['firstName'], firstName)
# if(res):
#     print(True)