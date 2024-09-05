# # WAP to accept registration details from the user like first name last name email id mobile number and DOB, check the validity of input if the entered data is valid register the user with user id as email id and one time randomly generated password with the cobination of first name last name and DOB.

# import re, random

# regExpress = {
#     "firstName": r"[a-z]|[A-Z]{0, 20}$",
#     "lastName": r"[a-z]|[A-Z]{0, 20}$",
#     "dob": r"\d\d/\d\d/\d\d\d\d$",
#     "phNumber": r"^[9|8|7]\d{9}$",
#     "emailId": r"^[a-z]\w{8,20}@[a-z]{3,6}.[a-z]{2,3}$"
# }

# correctInput = {'fName':False, 'lName':False, 'dob':False, 'pNum':False, 'emailId': False}
# while correctInput["fName"] == False:
#     firstName = input("Enter your name first name: ")
#     res = re.search(regExpress['firstName'], firstName)
#     if res:
#         correctInput['fName'] = True
#     else:
#         print("Reenter first name\n")

# while correctInput['lName'] == False:
#     lastName = input("Enter you last name: ")
#     res = re.search(regExpress['lastName'], lastName)
#     if res:
#         correctInput['lName'] = True
#     else:
#         print("Reenter last name\n")

# while correctInput['dob'] == False:
#     dob = input("Enter your date of birth: ")
#     res = re.search(regExpress['dob'], dob)
#     if res:
#         correctInput['dob'] = True
#     else:
#         print("Reenter dob\n")

# while correctInput['pNum'] == False:
#     phNumber = input("Enter your mobile number: ")
#     res = re.search(regExpress['phNumber'], phNumber)
#     if res:
#         correctInput['pNum'] = True
#     else:
#         print("Reenter phone number\n")

# while correctInput['emailId'] == False:
#     emailId = input("Enter you email id: ")
#     res = re.search(regExpress['emailId'], emailId)
#     if res:
#         correctInput['emailId'] = True
#     else:
#         print("Reenter email Id\n")

# randOtp = random.randint(1111, 9999)
# print(f"Your one time password is '{randOtp}'")
# while True:
#     otp = int(input("Enter the one time password: "))
#     if otp == randOtp:
#         print("your are registered succesfully.")
#         break

# practice q1: wap to accept student details from the user and store these details using list and display all the records in tabular format

# stdDetail = []

# for i in range(3):
#     stdName = input(f"Enter the name of student {i+1}: ")
#     stdAge = int(input(f"Enter the age of student {i+1}: "))
#     stdDetail.append([stdName, stdAge])


# print("stdName\t\tstdAge")
# for i in stdDetail:
#     print(f"{i[0]}\t\t{i[1]}")


# Practice q2: wap to demonstrate infinite while loop

# while(True):
#     print(1)

# # practice q3: wap to demonstrate multilevel inheritance

class GrandFather:
    def __init__(self, name, age):
        self.gName = name
        self.gAge = age
    def grandDetail(self):
        print(f"{self.gName}\n{self.gAge}")


class Father(GrandFather):
    def __init__(self, fName, fAge, name, age):
        self.fName = fName
        self.fAge = fAge
        GrandFather.__init__(self, name, age)
    def fatherDetail(self):
        print(f"{self.fName}\n{self.fAge}")
        self.grandDetail()


class Child(Father):
    def __init__(self, cName, cAge, fName, fAge, name, age):
        self.cName = cName
        self.cAge = cAge
        Father.__init__(self, fName, fAge, name, age)
    def childDetail(self):
        print(f"{self.cName}\n{self.cAge}")
        self.fatherDetail()


child1 = Child("jflsj", 32, "jsdl", 34, "djfl", 43)
child1.childDetail()