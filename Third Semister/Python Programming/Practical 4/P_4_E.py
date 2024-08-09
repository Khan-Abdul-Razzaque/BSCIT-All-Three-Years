student={}
n=int(input("How many student's details you want to enter: "))
for i in range(n):
    name=input("Enter student name: ")
    rollNo=int(input("Enter student roll no: "))
    student.update({f"S-->{i+1}": {"Name": name, 'RollNo': rollNo}})

print(student)

print("\n")
print("StdName\t\tStdRollNo")
for i in student:
    for j in student[i]:
        print(student[i][j],end="\t\t")      
    print("\n")