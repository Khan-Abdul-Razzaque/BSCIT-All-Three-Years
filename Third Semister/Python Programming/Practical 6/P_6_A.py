# Define the class student and store the student detail and display student information.

class Student:
    stdCount = 0
    def __init__(self, sName, sRollNo, sCourse):
        self.sName = sName
        self.sRollNo = sRollNo
        self.sCourse = sCourse
        Student.stdCount += 1
    
    def dispSDetail(self):
        print(f"The student name is: {self.sName}\nThe student roll no is: {self.sRollNo}\nThe student course is {self.sCourse}")
    
    def sCount(self):
        print(f"The student count is {Student.stdCount}")

aiman = Student("Aiman", 45, "BSc.IT")
razzaque = Student("Razzaque", 23, "BSc.IT")
aiman.dispSDetail()
razzaque.dispSDetail()
razzaque.sCount()