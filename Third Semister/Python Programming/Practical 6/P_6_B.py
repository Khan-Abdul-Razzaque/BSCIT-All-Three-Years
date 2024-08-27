# Write a program to demonstrate inheritance.

class Company:
    def __init__(self, copName, comAddress):
        self.comName = copName
        self.comAddress = comAddress
    
    def dispComp(self):
        print(f"Company name is: {self.comName}\nCompany address is {self.comAddress}")

class Employee(Company):
    def __init__(self, empName, empAddress, comName, comAddress):
        super
        self.empName = empName
        self.empAddress = empAddress
        Company.__init__(self, comName, comAddress)
    
    def dispEmp(self):
        print(f"Employee name is: {self.empName}\nEmployee address is: {self.empAddress}")
        self.dispComp()

e1 = Employee("Razzaque", "Kandivali", "Google", "USA")
e1.dispEmp()