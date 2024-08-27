students={}
n=int(input("How many student's details you want to enter: "))
for i in range(n):
    name=input("Enter student name: ")
    rollNo=input("Enter student roll no: ")
    students.update({f"S->{i+1}": {"Name": name, 'RollNo': rollNo}})

print(students)

print("\n")
print("StdName\t\tStdRollNo")
for i in students:
    for j in students[i]:
        print(students[i][j],end="\t\t")      
    print("\n")